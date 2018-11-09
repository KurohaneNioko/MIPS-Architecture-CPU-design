    .data
    symbol:.space 28
    array: .space 28
    space: .asciiz " "
    enter: .asciiz "\n"
    .text
    li   $v0, 5
    syscall
    move $s0, $v0 #s0 = n
    move $t1, $0 #t1 = i
    move $t2, $0 #t2 = 4*i (offset)
    li   $t7, 1
    move $t6, $sp #t6 = initial sp
FullArray:      #index in $a0
    addi $sp, $sp, -12
    sw   $t1, 8($sp)
    sw   $ra, 4($sp)
    sw   $a0, 0($sp)
    bgt  $s0, $a0, calcInitial #if index >= n ,print;else
    move $t1, $0 #t1 = i
    move $t2, $0 #t2 = 4*i (offset)
print:
    li	 $v0, 1		# system call #1 - print int
    lw	 $a0, array($t2)
    syscall				# execute
    li	 $v0, 4		# system call #4 - print string
    la	 $a0, space
    syscall				# execute
    addi $t1, $t1, 1
    sll  $t2, $t1, 2
    bne  $t1, $s0, print
    li	 $v0, 4		# system call #4 - print string
    la	 $a0, enter
    syscall				# execute
    lw   $t1, 8($sp)
    lw   $ra, 4($sp)
    addi $sp, $sp, 12
    jr   $ra

calcInitial:
    move $t1, $0 #t1 = i
    move $t2, $0 #t2 = 4*i (offset)
calc:
    bge  $t1, $s0, return
    lw   $t3, symbol($t2)
    bne  $t3, $0, next #if symbol[i] == 0, ...;else back
    addi $t4, $t1, 1  #t4 = i + 1
    sll  $t5, $a0, 2  #t5 = 4*a0 (offset)
    sw   $t4, array($t5) #array[index] = i + 1
    sw   $t7, symbol($t2) #t7 = 1
    addi $a0, $a0, 1
    jal  FullArray
    sll  $t2, $t1, 2
    sw   $0, symbol($t2)
next:
    addi $t1, $t1, 1
    sll  $t2, $t1, 2
    j calc

return:
    lw   $t1, 8($sp)
    lw   $ra, 4($sp)
    addi $sp, $sp, 12
######SERN WARNING###########
    lw   $a0, 0($sp)	####recover last "index" before next use!!!!!!######
######FBI WARNING############
    beq  $sp, $t6, exit #if sp back to initial place, indicates that the stack is recovered, now exit
    jr   $ra
exit: