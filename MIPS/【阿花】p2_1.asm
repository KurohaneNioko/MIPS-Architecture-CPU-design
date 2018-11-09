#t0杂 t1:n t2:4n? t3:i t4:j t5:偏移 t6:4n t7:sum s0:第一个数组的地址 s7：第二个数组的地址 t8:k
.data
array : .space 4000
space:.asciiz " "
enter:.asciiz "\n"
.text

li $v0,5
syscall
move $t1,$v0
la $s0,array
mult $t1,$t1
mflo $t2
li $t0,4
mult $t2,$t0
mflo $t2 #4n2
add $s7 $s0,$t2
mult $t0,$t1
mflo $t6#4n

li $t3,0
li $t4,0
move $t5,$s0 
for1:
li $v0 5
syscall
sw $v0,0($t5)
addi $t5,$t5,4
addi $t4,$t4,1
bne $t4,$t1,for1

li $t4,0
addi $t3,$t3,1
bne $t3,$t1,for1#20-33:new a1[]


li $t3,0
li $t4,0
move $t5,$s7 
for2:
li $v0 5
syscall
sw $v0,0($t5)
addi $t5,$t5,4
addi $t4,$t4,1
bne $t4,$t1,for2

li $t4,0
addi $t3,$t3,1
bne $t3,$t1,for2#35-49:new a2[]

#chengfa ruxia
li $t8 0#t2:k
li $t3 0
li $t4 0
li $t7,0

for3:
lw $s1,0($s0)
lw $s2,0($s7)
mult $s1,$s2
mflo $s3
add $t7,$t7,$s3
add $s7,$s7,$t6
addi $s0,$s0,4
addi $t4 $t4 1
bne $t4,$t1,for3

for4:
addi $t3,$t3 1
sub $s0 $s0 $t6
mult $t1 $t1
mflo $t0#3n
sub $s7 $s7 $t2
addi $s7 $s7 4
li $t4,0
move $a0 $t7
li $v0 1
syscall
la $a0 space
li $v0 4
syscall
li $t7 0
bne $t3 $t1 for3

for5:
li $t3 0
addi $t8 $t8 1
sub $s7 $s7 $t6
add $s0 $s0 $t6
la $a0 enter
li $v0 4
syscall
bne $t8 $t1 for3






#for(k=0;k<n;k++){
# for(i=0;i<n;i++){
#  for(j=0;j<n;j++){
#   sum+=a1[i][j]*a2[i][j];
#  }
#  输出sum和空格;
#  sum=0;
#  }
# 输出回车;
#}








