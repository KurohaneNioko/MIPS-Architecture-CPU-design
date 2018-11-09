ori $t1,$t1,0x12
ori $t2,$t2,0x31
ori $t9,$t9,0x23
sw $t2,0($0)
lw $t2,0($0)
mult $t1,$t3
mult $t1,$t2
mfhi $t3
mflo $t4
sll $t7 $t3,31
beq $t3,$t4,for_1_begin
ori $t5,$t5,0x23
ori $t6,$t6,0x14
sw $t6,0($0)
lw $t6,0($0)
div $t5,$t6
mfhi $t3
mflo $t4
add $t7 $t3,$t4
beq $t3,$t4,for_1_begin
sw $t5,0($0)
lw $t5,0($0)
mthi $t5
sw $t6,0($0)
lw $t6,0($0)
mtlo $t6
mfhi $t3
mflo $t4
for_1_begin:
lui $t7 0x1234
addi $t3,$t3,1
mthi $t3

mfhi $t3
