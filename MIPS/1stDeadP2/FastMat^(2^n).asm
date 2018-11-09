    .data
    temp:.word 0:64
    result:.word 0:64
    space:.asciiz " "
    enter:.asciiz "\n"
    .text
    li   $v0, 5     #read m: rank of mat
    syscall
    move $s0, $v0   #s0 = m
    li   $v0, 5     #read n: 2^n
    syscall
    move $s1, $v0   #s1 = n (for 2^n)

    mul  $s2, $s0, 4 #s2 = rank * 4 = 4m
    mulo $s3, $s0, $s0 #s3 = m^2
    move $s4, $s3    #s4 = m^2
    mul  $s4, $s4, 4 #s4 = 4(m^2)
    addi $s3, $s4, -4 #s3 = 4(m^2 -1) offset of next colomn
read:
    li   $v0, 5
    syscall
    sw   $v0, temp($t1)
    addi $t1, $t1, 4
    bne  $t1, $s4, read #if t1<4(m^2), read
    move $t1, $0
    beq  $s1, $0, printTemp
Calc:
    move $t0, $0
    move $t1, $0
    move $t2, $0
    move $t3, $0
    move $t4, $0
    move $t5, $0
    move $t6, $0
    move $t7, $0
    j Matsq
next:
    addi $s1, $s1, -1
    beq  $s1, $0, printResult
    j ResultToTemp

#t0 = row1; t1 = addr1; t2 = addr2; t3 = CrtCol; t4 = t
#t5 = ResultAddr t6 = resultcol  t7 = Result
#s6 = temp[i][k]; s7 = temp[k][j]
Matsq:
loop1:
    lw   $s6, temp($t1)
    lw   $s7, temp($t2)
    mulo $t7, $s6, $s7
    add  $t4, $t4, $t7

    addi $t1, $t1, 4
    add  $t2, $t2, $s2
    addi $t3, $t3, 1
    bne  $t3, $s0, loop1 #if CrtCol<m, loop1
    sw   $t4, result($t5)
    addi $t5, $t5, 4    #next result addr
    addi $t6, $t6, 1    #result numbers in this row
    beq  $t6, $s0, chgrow #if this row full, change row 
    sub  $t1, $t1, $s2 #addr1 to this row first
    sub  $t2, $t2, $s3 #addr2 to next col
    move $t3, $0
    move $t4, $0
    j loop1
chgrow:
    add  $t0, $t0, 1 #row1++
    beq  $t0, $s0, next #if finish, next
    move $t2, $0
    move $t3, $0
    move $t4, $0
    move $t6, $0     #resultcol = 0
    j loop1

ResultToTemp:
    move $t0, $0
recopy:
    lw   $s6, result($t0)
    sw   $s6, temp($t0)
    addi $t0, $t0, 4
    bne  $t0, $s4, recopy
    j Calc

printResult:
    move $t0, $0
    move $t1, $0
repr:
    lw   $a0, result($t0)
    li   $v0, 1
    syscall
    addi $t0, $t0, 4
    addi $t1, $t1, 1
    bne  $t1, $s0, prtspc1
    li   $v0, 4
    la   $a0, enter
    syscall
    move $t1, $0
    bne  $t0, $s4, repr
    j end
prtspc1:
    li   $v0, 4
    la   $a0, space
    syscall
    j repr

prtspc2:
    li   $v0, 4
    la   $a0, space
    syscall
    j retemp
printTemp:
    move $t0, $0
    move $t1, $0
retemp:
    lw   $a0, temp($t0)
    li   $v0, 1
    syscall
    addi $t0, $t0, 4
    addi $t1, $t1, 1
    bne  $t1, $s0, prtspc2
    li   $v0, 4
    la   $a0, enter
    syscall
    move $t1, $0
    bne  $t0, $s4, retemp

end: