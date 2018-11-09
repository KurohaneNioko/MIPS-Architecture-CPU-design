	initial:
	ori $1, $0, 0xfffe
	lui $2, 0xfffe
	srl $3, $2, 8
	slt $4, $3, $2
	sltu $5, $3, $2
	addi $8, $0, 8
	subi $9, $8, 4
	li $6, 0
begin:
	sw $1, 0($0)
	sh $3, 6($0)
	sb $1, 9($0)
	addi $6, $6, 4
	lw $1, 0($6)
	sb $1, -4($8)
	bltz $1, b1 
	addi $7, $0, 0x1234
	lhu $0,0($0)
b1:
	jal jali
	sb $7, 12($0)
	ori  $1, $0, 0xffff
	sh $1, 0($0)
	lhu $1, 2($0)
	jr $30
	nop
jali :
	lw $1, -4($8)
	ori $1, $0, 0x00ff
	sh $1, 0($9)
	lbu $9,  3($9)
	bne $9, $1, b2
	ori $3, $0, 0x4321
	bnei:
	jalr $30, $ra
	nop
	blez $0, b3
	nop
	lw $0, 0($0)
b3:j out
nop
b2:j bnei
nop
out:j nop1
nop
nop1:
nop

#mudi test
#initial
	xori $1, $0,  0x13579
	lui $2, 0xffff
	addi $3, $0, 0xf25a4
	sw $1, 0
	sw $2, 4

	#function test
	mult $1, $2
	mfhi $4
	mflo $5
	multu $1, $2
	mfhi $4
	mflo $5
	div $1, $2
	mfhi $4
	mflo $5
	divu $1, $2
	mfhi $4
	mflo $5
	mthi $3
	mtlo $1
	mfhi $4
	mflo $5

#conflict test
#md conflict
	mult $1, $2
	divu $2, $3
	mult $3, $4
	multu $5, $3
	div $4, $5
	mult $1, $5
	mflo $6

	mult $1, $1
	mflo $1
	multu $1, $1
	mflo $1
	mult $1, $1
	mflo $1

	beq $4, $5, branch1
	div $2, $3
	mflo $7

	branch1:
	div $3, $4
	mthi $5
	divu $2, $3
	div $3, $2
	mflo $8
	mfhi $7

#mdslot
	mult $2, $3
	add $1, $1, $1
	and $3, $1, $6
	nor $4, $5, $3
	blez $6, branch2
	sllv $4, $5, $4
	mfhi $9
	branch2:
	mtlo $4
	divu $1, $3		##
	xori $2, 123
	sltiu $5, $3, 2
	jal jumpw
	mflo $6
	mfhi $7

	j end1
	mult $2, $3

	jumpw:
	addiu $2, $4, 1345
	div $6, $8
	bne $2, $3, branch3
	sub $3, $4, $2
	sllv $2, $7, $3
	branch3:
	lb $12, 3
	jr $ra
	lhu $13, 6
	end1:
	mflo $1

	lw $1, 0
	mult $1, $1
	divu $1, $1
	lb $6, 5
	div $6, $6
	multu $6, $6

	lhu $3, 6
	mtlo $3
	mflo $4
	lbu $6, 7
	mthi $6
	mfhi $3

	addu $6, $6, $6
	mult $6, $6
	mflo $3
	subu $2, $3, $1
	div $2, $3
	mflo $7
	sw $7, 8
	mfhi $2
	add $2, $2, $2
	mflo $6
	bne $5, $6, branch
	srl $3, $2, 1
	branch:
	nop

	nop
	sll $0,$0,5
	nop
	sll $0,$0,2
	ori $1,123
	ori $2,456
	ori $3,111
	addi $1,$1,345
	addi $2,$2,123
	
	addi $4,$1,123
	addi $4,$4,234
	subu $4,$4,$1
	addi $4,$4,2113
	addi $4,$4,-132
	addiu $3,$2,323
	addiu $3,$2,-323
	addiu $3,$3,123
	
	andi $3,$3,1234
	andi $3,$3,-1233
	andi $4,$3,123
	beq $4,$3,task1
	nop
	ori $2,$3,999
	jal task1
	nop
	xori $2,$2,121
task1:
	add $31,$1,$31
	and $31,$2,$31
	addi $31,$31,234
	ori $4,$31,1234
	xori $5,$4,13488
	addi $6,$5,0
	beq $6,$5,task2
	nop
	ori $4,$2,13

task2:
	xori $4,$2,1231
	xori $2,$4,333
	addu $2,$2,$3
	xori $4,$2,213
	lui $4,993
	xori $4,$4,333
	jal task3
	nop
	ori $31,$31,444

task3:
	addi $1,$0,4
	addi $2,$0,6
	sll $4,$3,4
	srl $4,$3,2
	ori $4,$0,-4
	sra $4,$4,5
	sra $4,$4,1
	sllv $4,$4,$1
	sllv $4,$4,$2
	ori $4,$0,342
	sllv $4,$4,$1
	sllv $4,$4,$2
	ori $4,$0,-12
	srlv $4,$4,$1	
	srav $4,$4,$1
	and $4,$4,$1
	slti $3,$4,123
	slti $3,$4,-123
	sltiu $3,$4,22
	sltiu $3,$4,-222
	ori $1,$0,3
	slt $4,$3,$1
	slt $4,$3,$4
	blez $4,task4
	nop
	ori $4,$4,442
task4:
	xor $4,$4,$2
	xor $4,$4,$1
	or $4,$4,$2
	and $4,$2,$1
	addi $1,$0,0x0000337c
	jalr $2,$1
	nop
	ori $1,$1,113
task5:
	addi $31,$31,12
	addi $2,$0,-123
	bgez $2,task6
	nop
	addi $2,$2,222
	bgez $2,task6
	nop
	ori $1,$1,1231


	beq $0,$0,task6
	nop
	xor $4,$4,$1
	or $4,$4,$2
task6:


	li $2, 0x00001234
	li $3, 0xffff2345
	li $4, 0x00000002
	li $5, 0x00000233
	li $6, 0xf0ff1340
	li $7, 0xfffffffc
	li $8, 0x00000010
	li $9, 0x00000004
	add $10, $2, $3
	add $10, $10, $10
	add $11, $10, $2		#add自检
	addu $12, $11, $11
	addu $13, $12, $4		#addu自检
	sub $13, $13, $12
	sub $11, $13, $13		#sub自检
	beq $11, $2, jump1		#beq不跳转
	subu $12, $10, $4
	subu $10, $12, $11
jump1:
	sllv $14, $10, $4
	srlv $14, $14, $14
	subu $10, $9, $2
	beq $10, $2, jump2		#混插，验证beq跳转
	addu $15, $14, $14
	and $16, $15, $14
jump2:
	srav $16, $6, $2
	srav $17, $16, $16		#srav自检
	sllv $18, $17, $17
	sllv $19, $18, $4		#sllv
	srlv $10, $7, $5
	srlv $11, $10, $2
	srlv $12, $11, $4		#srlv
	and $13, $12, $11
	and $14, $13, $3		#and自检
	bne $14, $13, jump3		#bne跳
	nor $15, $14, $2
	addu $12, $15, $14
jump3:	
	srav $20, $7, $7		#算术
	srav $21, $7, $20
	nor $12, $21, $11
	and $13, $12, $11
	subu $10, $9, $4
	bne $10, $4, jump4		#相等bne不跳
	srav $12, $7, $4
	slt $22, $7, $4
jump4:
	and $14, $2, $3
	ori $11, $7, 0
	subu $11, $7, $3
	blez $11, jump5			#不跳
	or $12, $11, $2
	or $13, $12, $3			#or自检
	or $14, $13, $12
jump5:	
	xor $13, $8, $2
	xor $16, $13, $2		#xor自检
	xor $17, $16, $13
	nor $18, $17, $2
	nor $19, $18, $2
	nor $20, $19, $18		#nor自检
	ori $11, $2, 0
	subu $11, $3, $3
	blez $11, jump6			#跳
	slt $11, $11, $7
	nor $12, $11, $2
jump6:
	blez $7, jump7			#跳
	sltu $12, $7, $2
	nor $18, $12, $2
jump7:
	slt $18, $6, $7
	slt $19, $7, $18
	slt $20, $19, $18		#slt自检
	sltu $19, $6, $7
	sltu $20, $7, $18
	sltu $21, $20, $19		#sltu自检
	ori $11, $0, 0
	addu $11, $7, $9
	bgtz $11, jump8			#bgtz跳
	xor $17, $16, $13
	nor $18, $17, $2
	nop
jump8:
	subu $11, $4, $9
	bgtz $11, jump9			#bgtz不跳
	slt $12, $11, $3
	nor $13, $12, $11
	nop
jump9:
	ori $11, $0, 0
	addu $11, $7, $9
	bltz $11, jump10		#bltz不跳
	nop
	or $12, $11, $12
jump10:
	ori $12, $0, 0
	subu $12, $9, $8
	bltz $12, jump11		#bltz跳
	nop
	nor $18, $17, $2
jump11:
	srav $11, $7, $9
	bgez $11, jump12  		#bgez不跳
	and $12, $11, $2
	sltu  $13, $12, $8
jump12:
	ori $11, $7, 0
	subu $11, $11, $11
	bgez $11, jump13		#bgez跳
	srlv $19, $7, $9
	and $18, $19, $12
jump13:
	j jump14
	srlv $12, $11, $4	
	and $13, $12, $11
jump14:
	addu $18, $7, $9
	subu $19, $16, $18
	or $20, $19, $18
	and $21, $20, $19
	jal jump15
	xor $12, $18, $22
	and $19, $12, $13
	j jump16
	nop
	sltu $22, $ra, $7
jump15:
	sllv $19, $7, $9
	addu $18, $19, $3
	nor $19, $18, $19
	jr $ra
	srav $18, $7, $2
	slt $19, $18, $3
jump16:
	addi $ra, $ra, 0x0030
	jr $ra
	nor $18, $12, $12
	nop
	nop
	nop
	nop
	nop
	sllv $10, $2, $9
	or $12, $10, $2
	nop
	ori $12, $ra, 0
	addi $12, $12, 0x0040
	nop
	nop
	nor $10, $9, $2
	jalr $17, $12
	srav $18, $7, $2
	or $19, $2, $17
	addu $19, $19, $19
	
	
