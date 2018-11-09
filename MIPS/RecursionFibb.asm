    li   $v0, 5
    syscall
    add  $s1, $v0, $0
    addi $a0, $v0, 1
    move $v0, $0
    li   $s0, 1
    add  $t7, $sp, $0
fib:
    addi $a0, $a0, -1
    addi $sp, $sp, -8
    sw   $a0, 4($sp)
    sw   $ra, 0($sp)
    bge  $s0, $a0, rec #if a<=1 ,to rec
    jal  fib
    add  $v1, $v0, $v1
    sub  $v0, $v1, $v0
    move $s3, $v0
    lw   $a0, 4($sp)
    lw   $ra, 0($sp) 
    addi $sp, $sp, 8
    beq  $sp, $t7, exit
    jr   $ra

rec:
    move $t0, $0
    li   $v1, 1
    jr   $ra
exit: