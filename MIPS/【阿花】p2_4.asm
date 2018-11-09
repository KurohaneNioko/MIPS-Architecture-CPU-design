# s0:array s1:symbol s2:stack s3:n s4:index s5:all s6: t1:i t9:4
.data
array:.data 100
symbol:.data 100
stack:.data 1000
space:.asciiz " "
enter:.asciiz "\n"
.text

li $v0 5
syscall
move $s3 $v0
li $t9 4
li $s4 0

li $s5 1
all:
addi $t1 $t1 1
mult $s5 $t1
mflo $s5
bne $t1 $s3 all

bigloop:
sub $t0 $s4 $s3
bltz $t0 no_print
li $t1 0
la $s0 array
for_print:
lw $a0 0($s0)
li $v0 1
syscall
la $a0 space
li $v0 4
syscall
addi $s0 $s0 4
addi $t1 $t1 1
bne $t1 $s3 for_print
la $a0 enter
li $v0 4
syscall
subi $s5 $s5 1
beq $s5 $0 out
j return
no_print:
li $t1 0

nextloop:
if:
mult $t1 $t9
mflo $t0
la $s1 symbol
add $s1 $s1 $t0#symbol[i] add
lw $t0 0($s1)#t0=symbol[i] 

bne $t0 $0 nextloop2

la $s0 array
mult $t9 $s4
mflo $t0
add $s0 $s0 $t0#array[index] add
addi $t0 $t1 1
sw $t0 0($s0)
addi $t0 $0 1
sw $t0 0($s1)#array[index]=i+1

addi $sp $sp -12
sw $s1 8($sp)
sw $t1 4($sp)
sw $s4 0($sp)
addi $s4 $s4 1
jal bigloop
sw $0 0($s1)
addi $t1 $t1 1
bne $t1 $s3 nextloop

return:
lw $s1 8($sp)
lw $t1 4($sp)
lw $s4 0($sp)
addi $sp $sp 12
jr $ra

nextloop2:
addi $t1 $t1 1
bne $t1 $s3 nextloop
j return
out:
#int symbol[7],array[7];
#int n;
#void fullarray(int index){
# int i;
# if(index>=n){
#  for(i=0;i<n;i++){
#   printf array[i];
#  }
#  printf \n
#  return;
# }
# for(i=0;i<n;i++){
#  if(symbol[i]==0){
#   array[index]=i+1;
#   symbol[i]=1;
#   fullarray(index+1);
#   symbol[i]=0;
#  }
# }
#}
#int main(){
# int i;
# scanf n;
# fullarrey(0);
# return 0;
#}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
