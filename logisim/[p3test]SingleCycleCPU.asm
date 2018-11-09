	lui $16, 20
	lui $17, 16
	lui $15, 7
go: addu $13 $0 $15
	addu $10 $16 $17
	ori $10, $10, 216
	sw $1 4
	sw $10 100
	nop
	lui $19 455
	lw $20 100
	subu $20 $19 $10
	beq $15, $13, go
	lui $15, 8
	nop