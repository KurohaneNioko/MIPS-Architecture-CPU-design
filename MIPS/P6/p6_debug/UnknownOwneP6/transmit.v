`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:42:32 12/12/2017 
// Design Name: 
// Module Name:    transmit 
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
//译码是在各自内部译码的,而且转发并没有那么严格
//有可能满足多个条件，离得近的优先级高，优先级高的在前面
module transmit(
	input [1:0] Res_E,
	input [1:0] Res_M,
	input [1:0] Res_W,
	input [4:0] A3_E,
	input [4:0] A3_M,
	input [4:0] A3_W,
	input [31:0] IR_D,
	input [31:0] IR_E,
	input [31:0] IR_M,
	output [2:0] F_GRF_RD1_D,
	output [2:0] F_GRF_RD2_D,
	output [2:0] F_ALU_A_E,
	output [2:0] F_ALU_B_E,
	output [2:0] F_DM_RD2_M
    );
	wire [4:0] RD1_D, RD2_D;
	wire [4:0] RD1_E, RD2_E;
	wire [4:0] RD2_M;
	
	assign RD1_D	=	IR_D [25:21],
			 RD2_D	=	IR_D [20:16];
	
	assign RD1_E	=	IR_E [25:21],
			 RD2_E	=	IR_E [20:16];
	
	assign RD2_M	=	IR_M [20:16];
	//需要加一个pc+8的转发，但是要注意优先级的问题
	assign F_GRF_RD1_D	=	((RD1_D == A3_M) & (Res_M == `ALU) & (RD1_D != 5'b00000))	?	`M2D_RD1_ALU	:
									((RD1_D == A3_M) & (Res_M == `PC) & (RD1_D != 5'b00000))		?	`M2D_RD1_PC8	:
									((RD1_D == A3_W) & (Res_W == `ALU) & (RD1_D != 5'b00000))	?	`W2D_RD1_ALU	:
									((RD1_D == A3_W) & (Res_W == `DM) & (RD1_D != 5'b00000))		?	`W2D_RD1_DM		:
									((RD1_D == A3_W) & (Res_W == `PC) & (RD1_D != 5'b00000))		?	`W2D_RD1_PC8	:
									`D_RD1_Normal;
	//也要引入各级写使能,pc目前不需要判断写不写
	assign F_GRF_RD2_D	=	((RD2_D == A3_M) & (Res_M == `ALU) & (RD2_D != 5'b00000))	?	`M2D_RD2_ALU	:
									((RD2_D == A3_M) & (Res_M == `PC) & (RD2_D != 5'b00000))		?	`M2D_RD2_PC8	:
									((RD2_D == A3_W) & (Res_W == `ALU) & (RD2_D != 5'b00000))	?	`W2D_RD2_ALU	:
									((RD2_D == A3_W) & (Res_W == `DM) & (RD2_D != 5'b00000))		?	`W2D_RD2_DM		:
									((RD2_D == A3_W) & (Res_W == `PC) & (RD2_D != 5'b00000))		?	`W2D_RD2_PC8	:
									`D_RD2_Normal;
	
	assign F_ALU_A_E		=	((RD1_E == A3_M) & (Res_M == `ALU) & (RD1_E != 5'b00000))	?	`M2E_RD1_ALU	:
									((RD1_E == A3_M) & (Res_M == `PC) & (RD1_E != 5'b00000))		?	`M2E_RD1_PC8	:
									((RD1_E == A3_W) & (Res_W == `ALU) & (RD1_E != 5'b00000))	?	`W2E_RD1_ALU	:
									((RD1_E == A3_W) & (Res_W == `DM) & (RD1_E != 5'b00000))		?	`W2E_RD1_DM		:
									((RD1_E == A3_W) & (Res_W == `PC) & (RD1_E != 5'b00000))		?	`W2E_RD1_PC8	:
									`E_RD1_Normal;
	
	assign F_ALU_B_E		=	((RD2_E == A3_M) & (Res_M == `ALU) & (RD2_E != 5'b00000))	?	`M2E_RD2_ALU	:
									((RD2_E == A3_M) & (Res_M == `PC) & (RD2_E != 5'b00000))		?	`M2E_RD2_PC8	:
									((RD2_E == A3_W) & (Res_W == `ALU) & (RD2_E != 5'b00000))	?	`W2E_RD2_ALU	:
									((RD2_E == A3_W) & (Res_W == `DM) & (RD2_E != 5'b00000))		?	`W2E_RD2_DM		:
									((RD2_E == A3_W) & (Res_W == `PC) & (RD2_E != 5'b00000))		?	`W2E_RD2_PC8	:
									`E_RD2_Normal;
	
	assign F_DM_RD2_M		=	((RD2_M == A3_W) & (Res_W == `ALU) & (RD2_M != 5'b00000))	?	`W2M_RD2_ALU	:
									((RD2_M == A3_W) & (Res_W == `DM) & (RD2_M != 5'b00000))		?	`W2M_RD2_DM		:
									`M_RD2_Normal;


endmodule
