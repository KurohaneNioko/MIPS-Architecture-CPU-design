#t0:杂 t1:n t2:i s2:1时表示输出1 s3:[n/2] s0:地址 s1:尾地址    s5:4 s6:1 t3,t4:暂时存从头和尾取出的数用以比较
.data
array:.data 84
zero:.asciiz"0"
one:.asciiz"1"
.text

li $s6 1
li $s5 4
li $v0 5
syscall
move $t1 $v0
la $s0 array
mult $t1 $s5
mflo $t0#t0=4n
add $s1 $s0 $t0
sub $s1 $s1 $s5
li $t0 2
div $t1 $t0
mflo $s3#得数

li $t2 0
move $t0 $s0
for:
li $v0 12
syscall
sw $v0 0($t0)
add $t0 $t0 $s5
add $t2 $t2 $s6
bne $t2 $t1 for

li $t2 0#i
li $s2 0
la $a0 one
li $v0 4
for1:
lw $t3 0($s0)
lw $t4 0($s1)
bne $t3 $t4 p2
add $s0 $s0 $s5#s0++
sub $s1 $s1 $s5#s1--
add $t2 $t2 $s6#i++
beq $t2 $s3 out1
j for1

out1:
syscall
j end

p2:
la $a0 zero
syscall

end:

#for(i=0;i<n/2;i++){
# if(a[s0]!=a[s1])break;
# s0++;s1--;
#}









