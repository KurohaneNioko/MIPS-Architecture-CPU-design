`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:56:29 12/11/2017 
// Design Name: 
// Module Name:    ALU 
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
`include "macro.v"

module ALU(
	input [31:0] ALU_A_E,
	input [31:0] ALU_B_E,
	input [31:0] IR_E,
	input [1:0] shiftop_E,
	input [3:0] ALUOp_E,
	output [31:0] ALU_C_E
    );
	wire [4:0] shiftv, shiftn;
	wire [4:0] shift;
	
	assign	shiftn	=	IR_E[10:6];
	assign	shiftv	=	ALU_A_E[4:0];
	//不能直接接到rt上，这样会出现两个冲突，还是应该直接引入IR吧
	assign	shift		=	(shiftop_E == `sel_v)	?	shiftv	:	shiftn;
	
	assign	ALU_C_E	=	(ALUOp_E == `plus)	?	(ALU_A_E + ALU_B_E)	:
								(ALUOp_E == `reduce)	?	(ALU_A_E - ALU_B_E)	:
								(ALUOp_E == `and_)	?	(ALU_A_E & ALU_B_E)	:
								(ALUOp_E == `or_)		?	(ALU_A_E | ALU_B_E)	:
								(ALUOp_E == `xor_)	?	(ALU_A_E ^ ALU_B_E)	:
								(ALUOp_E == `nor_)	?	~(ALU_A_E | ALU_B_E)	:
								(ALUOp_E == `sll_vn)	?	(ALU_B_E << shift)	:
								(ALUOp_E == `srl_vn)	?	(ALU_B_E >> shift)	:
								(ALUOp_E == `sra_vn)	?	$signed($signed(ALU_B_E) >>> shift)	:
								(ALUOp_E == `slt_)	?	(($signed(ALU_A_E) < $signed(ALU_B_E))	?	1	:	0)	:
								(ALUOp_E == `sltu_)	?	(ALU_A_E < ALU_B_E	?	1	:	0)	:
								32'hffff_ffff;


endmodule
