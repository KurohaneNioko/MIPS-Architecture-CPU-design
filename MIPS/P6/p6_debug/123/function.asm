#store
li $s1,0x12345678
li $s2,-1
li $s3,-2
sw $s1,0($0)
sb $s2,3($0)
sh $s3,0($0)
#load
lw $s1,0($0)
lb $s2,3($0)
lbu $s2,3($0)
lh $s3,2($0)
lhu $s3,2($0)
#cal_r_r
addu $s0,$s1,$s2
add $s0,$s1,$s2
subu $s0,$s1,$s2
sub $s0,$s1,$s2
li $s1,-1
li $s2,-1
sllv $s0,$s1,$s2
srlv $s0,$s1,$s2
srav $s0,$s1,$s2
li $s1,1
srav $s0,$s1,$s2
and $s0,$s1,$s2
or $s0,$s1,$s2
xor $s0,$s1,$s2
nor $s0,$s1,$s2
li $s1,-1
slt $s0,$s1,$s2
sltu $s0,$s1,$s2
#cal_rt_s
sll $s0,$s1,5
srl $s0,$s1,4
sra $s0,$s1,4
#MULTDIV
mult $s1,$s2
mflo $t0
mfhi $t1
multu $s1,$s2
mflo $t0
mfhi $t1
li $s1,1
div $s1,$s2
mflo $t0
mfhi $t1
divu $s1,$s2
mflo $t0
mfhi $t1
mtlo $s1
mthi $s2
mflo $t0
mfhi $t1
#branch
beq $0,$0,label1
nop
li $s0,1
label1:
beq $s1,$0,label2
nop
li $s0,2
label2:
bne $0,$0,label3
nop
li $s0,3
label3:
bne $s1,$s2,label4
nop
li $s0,4
label4:
bgtz $s1,label5
nop
li $s0,5
label5:
bgtz $s2,label6
nop
li $s0,6
label6:
bgez $0,label7
nop
li $s0,7
label7:
bgez $1,label8
nop
li $s0,8
label8:
bgez $s2,label9
nop
li $s0,9
label9:
blez $0,label10
nop
li $s0,10
label10:
blez $s1,label11
nop
li $s0,11
label11:
blez $s2,label12
nop
li $s0,12
label12:
#jump
j label13
nop
li $s0,13
label13:
jal label14
nop
li $s0,14
label14:
jal label15
nop
li $s0,15
j label16
nop
label15:
jr $ra
nop
label16:
jalr $s0,$ra
nop