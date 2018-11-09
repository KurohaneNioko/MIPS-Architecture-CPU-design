    .data
    data:.word 0:100
    space:.asciiz " "
    .text
#C code
#int n�?*a
#for (i = 0; i<n; i++) {
#	for (j = i; j<n; j++)
#	{  if (a[j] < a[i])
#		 {a[i] += a[j];
#		  a[j] = a[i] - a[j];
#		  a[i] = a[i] - a[j];}
#	}
#}
    li   $v0, 5
    syscall
    move $s0, $v0   #s0 = n
    move $t0, $0    #t0 is read number counter
    move $t1, $0    #t1 is offset
read:
    li   $v0, 5
    syscall
    sll  $t1, $t0, 2
    sw	 $v0, data($t1)
    addi $t0, $t0, 1
    bne  $t0, $s0, read

    move $t0, $0    #t0 is i
    move $t1, $0    #t1 is j
    move $t2, $0    #t2 is offset-i
    move $t3, $0    #t3 is offset-j
arrange:
    lw	 $s1, data($t2)		#s1 = a[i]
    lw   $s2, data($t3)     #s2 = a[j]
    bge  $s1, $s2, swap
increment:
    addi $t1, $t1, 1
    sll  $t3, $t1, 2
    bne  $t1, $s0, arrange
    addi $t0, $t0, 1
    sll  $t2, $t0, 2
    move $t1, $t0
    sll  $t3, $t1, 2
    bne  $t0, $s0, arrange
    move $t0, $0
    move $t1, $0
    j output

swap:
    add  $s1, $s1, $s2      #a[i] += a[j]
    sub  $s2, $s1, $s2      #a[j] = a[i] - a[j]
    sub  $s1, $s1, $s2      #a[i] = a[i] - a[j]
    sw   $s1, data($t2)
    sw   $s2, data($t3)
    j increment

output:
    sll  $t1, $t0, 2
    lw   $a0, data($t1)
    li   $v0, 1
    syscall
    addi $t0, $t0, 1
    beq  $t0, $s0, exit
    li   $v0, 4
    la   $a0, space
    syscall
    j output

exit: