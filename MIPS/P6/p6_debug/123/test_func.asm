# MIPS-C3={LB、LBU、LH、LHU、LW、SB、SH、SW、ADD、ADDU、
#SUB、 SUBU、 MULT、 MULTU、 DIV、 DIVU、 SLL、 SRL、 SRA、 SLLV、
#SRLV、SRAV、AND、OR、XOR、NOR、ADDI、ADDIU、ANDI、ORI、
#XORI、LUI、SLT、SLTI、SLTIU、SLTU、BEQ、BNE、BLEZ、BGTZ、
#BLTZ、BGEZ、J、JAL、JALR、JR、MFHI、MFLO、MTHI、MTLO}
#cal_i侏峺綜霞編ADDI、ADDIU、ANDI、ORI、
#XORI、LUI
ori $1,$zero,0xabcd
ori $2,$zero,1234
addi $3,$1,234
addiu $4,$1,0x23
andi $1,$1,0
addi $3,$3,0xffff
lui $4,0xffff
addi $4,$4,5
addu $4,$4,0xffff
xori $4,$4,0
#sll侏峺綜霞編
sll $6,$4,2
sra $7,$4,3
srl $7,$4,2
ori $1,$1,0
addi $1,$0,3
lui $4,0xffee
addu $1,$1,$4
srav $4,$4,$1
srlv $4,$4,$1
sllv $5,$3,$2
#cal_r侏峺綜霞編AND、OR、XOR、NOR��ADD、ADDU、
#SUB、 SUBU、 MULT、 MULTU、 DIV、 DIVU
add $1,$zero,$zero
add $2,$zero,$zero
addi $1,$1,0x00ff
addi $2,$1,0xff00
mult $2,$1
bne $1,$2,b1
mfhi $2
sll $2,$2,1
b1:mflo $3
and $4,$1,$2
xor $3,$4,$3
nor $5,$3,$2
lui $2,0xffee
mult $2,$3
mfhi $5
mflo $6
mthi $6
mtlo $5
mfhi $6
mflo $5
addi $4,$4,0xffff
multu $3,$4
mfhi $5
mflo $6
div $5,$6













