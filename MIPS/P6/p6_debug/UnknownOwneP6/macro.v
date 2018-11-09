`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:04:11 12/10/2017 
// Design Name: 
// Module Name:    macro 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
//opcode
//考虑一下nop和sll冲突
`define	add		((funct == 6'b100000)&(opcode == 6'b000000))
`define	addu		((funct == 6'b100001)&(opcode == 6'b000000))
`define	And		((funct == 6'b100100)&(opcode == 6'b000000))
`define	Nor		((funct == 6'b100111)&(opcode == 6'b000000))
`define	Or			((funct == 6'b100101)&(opcode == 6'b000000))
`define	sub		((funct == 6'b100010)&(opcode == 6'b000000))
`define	subu		((funct == 6'b100011)&(opcode == 6'b000000))
`define	Xor		((funct == 6'b100110)&(opcode == 6'b000000))
`define	sll		((funct == 6'b000000)&(opcode == 6'b000000))
`define	sllv		((funct == 6'b000100)&(opcode == 6'b000000))
`define	sra		((funct == 6'b000011)&(opcode == 6'b000000))
`define	srav		((funct == 6'b000111)&(opcode == 6'b000000))
`define	srl		((funct == 6'b000010)&(opcode == 6'b000000))
`define	srlv		((funct == 6'b000110)&(opcode == 6'b000000))
`define	slt		((funct == 6'b101010)&(opcode == 6'b000000))
`define	sltu		((funct == 6'b101011)&(opcode == 6'b000000))
`define	jr 		((funct == 6'b001000)&(opcode == 6'b000000))
`define	jalr		((funct == 6'b001001)&(opcode == 6'b000000))
`define	mult		((funct == 6'b011000)&(opcode == 6'b000000))
`define	multu		((funct == 6'b011001)&(opcode == 6'b000000))
`define	div		((funct == 6'b011010)&(opcode == 6'b000000))
`define	divu		((funct == 6'b011011)&(opcode == 6'b000000))
`define	mfhi		((funct == 6'b010000)&(opcode == 6'b000000))
`define	mflo		((funct == 6'b010010)&(opcode == 6'b000000))
`define	mthi		((funct == 6'b010001)&(opcode == 6'b000000))
`define	mtlo		((funct == 6'b010011)&(opcode == 6'b000000))
`define	addi		(opcode == 6'b001000)
`define	addiu		(opcode == 6'b001001)
`define	andi		(opcode == 6'b001100)
`define	lui 		(opcode == 6'b001111)
`define	ori		(opcode == 6'b001101)
`define	xori		(opcode == 6'b001110)
`define	slti		(opcode == 6'b001010)
`define	sltiu		(opcode == 6'b001011)
`define	lb			(opcode == 6'b100000)
`define	lbu		(opcode == 6'b100100)
`define	lh			(opcode == 6'b100001)
`define	lhu		(opcode == 6'b100101)
`define	lw			(opcode == 6'b100011)
`define	sb			(opcode == 6'b101000)
`define	sh			(opcode == 6'b101001)
`define	sw 		(opcode == 6'b101011)
`define	beq 		(opcode == 6'b000100)
`define	bne		(opcode == 6'b000101)
`define	blez		(opcode == 6'b000110)	//加跳转指令要注意有没有identify
`define	bgtz		(opcode == 6'b000111)
`define	bgez		((opcode == 6'b000001)&(identify == 5'b00001))	//后面还要加标识
`define	bltz		((opcode == 6'b000001)&(identify == 5'b00000))
`define	jal 		(opcode == 6'b000011)
`define	j			(opcode == 6'b000010)
`define	R_nop 	(opcode == 6'b000000)
//pc_sel
`define	ADD4			2'b00			//normal
`define	NPC			2'b01			//beq、jal...
`define	NPC_REG		2'b11			//jr...
//regdst
`define	write_rt		2'b00
`define	write_rd		2'b01
`define	write_31		2'b10
//Extender
`define	zero_ext			3'b001
`define	low_zero_ext	3'b010
`define	sign_ext			3'b011
//ALUOp
`define	plus 			4'b0000
`define	reduce 		4'b0001
`define	or_	 		4'b0010
`define	and_	 		4'b0011
`define	xor_			4'b0100
`define	nor_			4'b0101
`define	slt_			4'b0110
`define	sltu_			4'b0111
`define	sll_vn		4'b1000
`define	srl_vn		4'b1001
`define	sra_vn		4'b1010
//shift_sel
`define	sel_n			2'b01
`define	sel_v			2'b10
//ALU_sel	
`define	sel_Rd2		1'b0
`define	sel_Imm		1'b1
//mult_div
`define	no_start		4'b0000
`define	start_mult	4'b0001
`define 	start_multu	4'b0010
`define	start_div	4'b0011
`define	start_divu	4'b0100
`define	start_mthi	4'b0101
`define	start_mtlo	4'b0110
//D_E_ALU_sel,
`define	sel_ALU_C_E	3'b001
`define	sel_hi_E		3'b010
`define	sel_lo_E		3'b011
//Branch
`define	normal		4'b0000
`define	npc_beq		4'b0001
`define	npc_bne		4'b0010
`define	npc_blez		4'b0011
`define	npc_bgtz		4'b0100
`define	npc_bltz		4'b0101
`define	npc_bgez		4'b0110
`define	npc_j			4'b0111
`define	npc_jr		4'b1000
`define	npc_jal		4'b1001
`define	npc_jalr		4'b1010
//DM_sel
`define	sel_lb		4'b0001
`define	sel_lbu		4'b0010
`define	sel_lh		4'b0011
`define	sel_lhu		4'b0100
`define	sel_lw		4'b0101
`define	sel_sb		4'b0110
`define	sel_sh		4'b0111
`define	sel_sw		4'b1000
//regdst
`define	write_rt		2'b00
`define	write_rd		2'b01
`define	write_31		2'b10
//Mem2Reg
`define	ALU_C			2'b01
`define	DM_data		2'b10
`define	reg_jal		2'b11
//Res判断暂停寄存器
`define	NW			2'b00
`define	ALU		2'b01
`define 	DM			2'b10
`define	PC			2'b11
//transmit_mux
//jr_D可以和RD1_D合并

//F_GRF_RD1_D
`define	D_RD1_Normal	3'b000
`define 	M2D_RD1_ALU		3'b001
`define	M2D_RD1_PC8		3'b010
`define	W2D_RD1_ALU		3'b011
`define	W2D_RD1_DM		3'b100
`define	W2D_RD1_PC8		3'b101
//F_GRF_RD2_D
`define	D_RD2_Normal	3'b000
`define	M2D_RD2_ALU		3'b001
`define	M2D_RD2_PC8		3'b010
`define	W2D_RD2_ALU		3'b011
`define	W2D_RD2_DM		3'b100
`define	W2D_RD2_PC8		3'b101
//F_ALU_A_E
`define	E_RD1_Normal	3'b000
`define	M2E_RD1_ALU		3'b001
`define	M2E_RD1_PC8		3'b010
`define	W2E_RD1_ALU		3'b011
`define	W2E_RD1_DM		3'b100
`define	W2E_RD1_PC8		3'b101
//F_ALU_B_E
`define	E_RD2_Normal	3'b000
`define	M2E_RD2_ALU		3'b001
`define	M2E_RD2_PC8		3'b010
`define	W2E_RD2_ALU		3'b011
`define	W2E_RD2_DM		3'b100
`define	W2E_RD2_PC8		3'b101
//F_DM_RD2_M
`define	M_RD2_Normal	3'b000
`define	W2M_RD2_ALU		3'b010
`define	W2M_RD2_DM		3'b100
//normal_mux
