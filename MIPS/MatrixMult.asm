    .data
    elmt1:.word 0:64
    elmt2:.word 0:64
    space:.asciiz " "
    ChgLine:.asciiz "\n"
    .text
    #MatA * MatB
    #A stored in row first
    #B stored in column first
    li   $v0, 5
    syscall     #read rank
    move $s0, $v0    # $s0 is rank
    move $t0, $0   #offset from elmt
    move $t1, $0   #current row
    move $t2, $0   #current column
    mult $s0, $s0  
    mflo $s3       #s0 = n, s3 = n^2
store1:
    li   $v0, 5
    syscall
    mult $t1, $s0
    mflo $t0     #t0 = row * MAXcolumn
    add  $t0, $t0, $t2 #now 't0'th elmt
    sll  $t0, $t0, 2   #t0 is offset
    sw   $v0, elmt1($t0)
    addi $t2, $t2, 1    #column++
    bne  $t2, $s0, store1    #if column not max: store1, else row++ && column = 0
    move $t2, $0     #column = 0
    addi $t1, $t1, 1 #row++
    bne  $t1, $s0, store1   #if not full, store

    move $t0, $0   #reset offset
    sll  $s1, $s0, 2 #s1 = every step offset
    la   $t1, elmt2   #t1 = start address
    move $t2, $0   #elmt counter
    move $t3, $0   #changeline counter
store2:
    li   $v0, 5
    syscall
    sw   $v0, elmt2($t0)
    addi $t2, $t2, 1    #elmt++
    addi $t3, $t3, 1    #chgline++
    beq  $t2, $s3, GoOn #if full, goon
    bne  $t3, $s0, skipNint     #if changeline counter != n skip for store2
    move $t3, $0    #reset changeline counter
    move $t4, $t0
    srl  $t0, $t0, 2    #find next place
    sub  $t0, $s3, $s0
    addi $t0, $t0, -1
    sll  $t0, $t0, 2
    sub  $t0, $t4, $t0  #next place = current place - (n^2 - n -1)
    j store2
GoOn:
    move $a0, $0   #result
    move $t0, $0   #time of calc in 1 output
    move $t1, $0   #offset from elmt1
    move $t2, $0   #offset from elmt2
    #move $t3, $0   #calc times of 1 row in emlt1
    move $t4, $0   #Total output counter
    move $t5, $0   #every n outputs
    sll  $s4, $s0, 2   #elmt1 backward for next calc
calc:
    lw   $s1, elmt1($t1)
    lw   $s2, elmt2($t2)
    mult $s1, $s2
    mflo $s1
    add  $a0, $a0, $s1  #renew result
    addi $t0, $t0, 1
    addi $t1, $t1, 4    #addr+=4
    addi $t2, $t2, 4    #addr+=4
    bne  $s0, $t0, calc #if calc n times, output and change column or row
    li   $v0, 1
    syscall
    addi $t4, $t4, 1
    beq  $t4, $s3, Exit     #if we have outputed n^2 elmts, then exit
    move $t0, $0
    addi $t5, $t5, 1
    beq  $t5, $s0, ChangeLine   #every n outputs, print \n, else " "
    la   $a0, space
    li   $v0, 4
    syscall
    move $a0, $0
    sub  $t1, $t1, $s4  #MatA back to the start of this row
    j calc

ChangeLine:
    la   $a0, ChgLine
    li   $v0, 4
    syscall
    move $t5, $0
    move $a0, $0
    move $t2, $0 
    j calc      #now A starts from next line ,B stars from the first elmt
Exit:
    li   $v0, 10
    syscall
skipNint:
    add  $t0, $t0, $s1
    j store2
