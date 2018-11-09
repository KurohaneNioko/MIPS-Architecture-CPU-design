#t0杂 s0:array地址 s1可变地址指针 t1=n t2:i t3:j t4:tmin t5:min s6:a[i] s7:a[j] t8:4in t9:杂 s2:n-1 s3:4 s4:1
.data
array : .space 400
space:.asciiz " "
enter:.asciiz "\n"
.text
li $s3 4
li $s4 1
li $v0 5
syscall
move $t1 $v0
sub $s2 $t1 $s4#s2=n-1
li $t2 0
la $s0 array
move $s1 $s0

loop1:
li $v0 5
syscall
move $t0 $v0
sw $t0 0($s1)
add $s1 $s1 $s3#s1+4
add $t2 $t2 $s4#i++
bne $t2 $t1 loop1#把数据导入



li $t2 0
li $t3 0
li $t5 0
move $s1 $s0

for1:

lw $s6 0($s1)
move $t4 $s6
move $t5 $t2
add $s1 $s1 $s3#s1+4

add $t3 $t2 $s4#j++
for2:
lw $s7 0($s1)
add $s1 $s1 $s3#s1+4
sub $t0 $s7 $t4
bgez $t0 if
move $t4 $s7
move $t5 $t3#找最小的
if:
add $t3 $t3 $s4#j++
bne $t3 $t1 for2

mult $s3 $t5
mflo $t9#4min
move $s1 $s0
add $s1 $s1 $t9
sw $s6 0($s1)#存入a[min]
mult $s3 $t2
mflo $t9#4i
move $s1 $s0
add $s1 $s1 $t9
sw $t4 0($s1)#存入a[i]
add $t2 $t2 $s4#t2++
mult $s3 $t2
mflo $t9
move $s1 $s0
add $s1 $s1 $t9#计算下一次i循环时的地址偏移
bne $t2 $s2 for1


#print
move $s1 $s0
li $t2 0
for3:
lw $a0 0($s1)
li $v0 1
syscall
la $a0 space
li $v0 4
syscall
add $t2 $t2 $s4
add $s1 $s1 $s3
bne $t2 $t1 for3



#for(i=0;i<n;i++){
# tmin=a[i];
# min=i;
# for(j=i+1;j<n;j++){
#  if(a[j]<tmin){
#   tmin=a[j];
#   min=j;
#  }
# }
# a[min]=a[i];
# a[i]=tmin;
#}











