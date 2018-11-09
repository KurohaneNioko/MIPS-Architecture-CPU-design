    .data
    a:.space 400
    str:.space 104
    ct:.space 104
    space:.asciiz " "
    enter:.asciiz "\n"
    .text
    #t1 = offset of a
    #t2 = offset of str & counter
    #t3 = offset of next new char
    #s0 = n
    #s7 = 4*n (used for offset)
    #s2 used for counter++
    li   $v0, 5
    syscall
    move $s0, $v0
    mul  $s7, $s0, 4 #s1 = Max offset
read:
    li   $v0, 12
    syscall
    sw   $v0, a($t1)
    addi $t1, $t1, 4
    bne  $t1, $s7, read
    move $t1, $0
check:
    lw   $s0, a($t1)
loop:
    lw   $s1, str($t2)
    beq  $s0, $s1, ctplus
    beq  $t2, $t3, addnew
    addi $t2, $t2, 4
    j loop
ctplus:
    lw   $s2, ct($t2)
    addi $s2, $s2, 1
    sw   $s2, ct($t2)
    move $t2, $0
    addi $t1, $t1, 4
    beq  $t1, $s7, print
    j check
addnew:
    sw   $s0, str($t3)
    li   $s4, 1
    sw   $s4, ct($t3)
    addi $t3, $t3, 4
    move $t2, $0
    addi $t1, $t1, 4
    beq  $t1, $s7, print
    j check
print:
    move $t1, $0
    lw   $a0, str($t1)
re: li   $v0, 11
    syscall
    li   $v0, 4
    la   $a0, space
    syscall
    lw   $a0, ct($t1)
    li   $v0, 1
    syscall
    li   $v0, 4
    la   $a0, enter
    syscall
    addi $t1, $t1, 4
    lw   $a0, str($t1)
    bne  $a0, $0, re