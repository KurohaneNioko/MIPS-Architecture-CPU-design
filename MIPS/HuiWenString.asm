    .data
    str:.space 160
    .text
    li   $v0, 5
    syscall
    move $s0, $v0   #s0 = n
    move $t0, $0    #t0 = read counter
    sll  $t1, $t0, 2 #t1 = offset
read:
    sll  $t1, $t0, 2
    li   $v0, 12
    syscall
    sw   $v0, str($t1)
    addi $t0, $t0, 1
    bne  $t0, $s0, read
    move $t2, $0    #t1 in end t2 in first
judge:
    lw   $s1,str($t1)
    lw   $s2,str($t2) 
    bne  $s1, $s2, zero
    addi $t1, $t1, -4
    addi $t2, $t2, 4    #t1 and t2 come close and compare
    bge  $t2, $t1, one  #when t2 passed t1 ,indicates  HuiWen
    j judge
one:
    li   $v0, 1
    li   $a0, 1
    syscall
    j return
zero:
    li   $v0, 1
    li   $a0, 0
    syscall

return: