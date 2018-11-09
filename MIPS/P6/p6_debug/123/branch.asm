#branch_jump_test
.text# ,bgez,jalr
ori $s1,0xffff
lui $s2,0xffff
bne $s1,$s2,b1
nop
sw $s1,($zero)
b1:bne $s1,$s1,b2
nop
sw $s1,4($zero)
b2:blez $s1,b3
nop
sw $s1,8($zero)
b3:blez $2,b4
nop
sw $s1,12($zero)
b4:blez $0,b5
nop
sw $s1,16($zero)
b5:bgtz $2,b6
nop
sw $s1,20($zero)
b6:bgtz $1,b7
nop
sw $s1,24($zero)
b7:bgtz $0,b8
nop
sw $s1,28($zero)
b8:bltz $s1,b9
nop
sw $s1,32($zero)
b9:bltz $s2,b10
nop
sw $s1,36($zero)
b10:bgez $s2,b11
nop
sw $1,40($zero)
b11:bgez $s1,b12
nop
sw $1,44($zero)
b12:bgez $zero,b13
nop
sw $1,48($zero)

b13:
la $5,b14
jalr $16,$5
nop
addu $5,$6,$5
b14: jalr $6,$5
nop









