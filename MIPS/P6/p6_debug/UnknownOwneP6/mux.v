`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:03:17 12/10/2017 
// Design Name: 
// Module Name:    mux 
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

module ALU_sel_mux(
	input [31:0] GRF_ALU_B_E,
	input [31:0] Ext_B_E,
	input ALU_sel_E,
	output [31:0] ALU_B_E
	);
	
	assign	ALU_B_E	=	(ALU_sel_E == `sel_Rd2)	?	GRF_ALU_B_E	:
																	Ext_B_E		;
	
endmodule

module Mem2Reg_mux(
	input [31:0] pc8_W,
	input [31:0] ALU_C_W,
	input [31:0] DM_out_W,
	input	[1:0] Mem2Reg_W,
	output [31:0] reg_writedata
	);
	
	assign reg_writedata	=	(Mem2Reg_W == `ALU_C)	?	ALU_C_W	:
									(Mem2Reg_W == `DM_data)	?	DM_out_W	:
									(Mem2Reg_W == `reg_jal)	?	pc8_W		:
									32'hxxxx_xxxx;
									
endmodule

module GRF_RD1_mux(
	input [31:0] GRF_out_RD1,
	input [31:0] ALU_C_M,
	input [31:0] pc8_M,
	input [31:0] ALU_C_W,
	input [31:0] pc8_W,
	input [31:0] DM_out_W,
	input [2:0] F_GRF_RD1_D,
	output [31:0] N_RD1_D
    );
	
	assign N_RD1_D	=	(F_GRF_RD1_D == `D_RD1_Normal)?	GRF_out_RD1	:
							(F_GRF_RD1_D == `M2D_RD1_ALU)	?	ALU_C_M		:
							(F_GRF_RD1_D == `M2D_RD1_PC8)	?	pc8_M			:
							(F_GRF_RD1_D == `W2D_RD1_ALU)	?	ALU_C_W		:
							(F_GRF_RD1_D == `W2D_RD1_PC8)	?	pc8_W			:
							(F_GRF_RD1_D == `W2D_RD1_DM)	?	DM_out_W		:
							32'hxxxx_xxxx;


endmodule

module GRF_RD2_mux(
	input [31:0] GRF_out_RD2,
	input [31:0] ALU_C_M,
	input [31:0] pc8_M,
	input [31:0] ALU_C_W,
	input [31:0] pc8_W,
	input [31:0] DM_out_W,
	input [2:0] F_GRF_RD2_D,
	output [31:0] N_RD2_D
    );
	
	assign N_RD2_D	=	(F_GRF_RD2_D == `D_RD2_Normal)?	GRF_out_RD2	:
							(F_GRF_RD2_D == `M2D_RD2_ALU)	?	ALU_C_M		:
							(F_GRF_RD2_D == `M2D_RD2_PC8)	?	pc8_M			:
							(F_GRF_RD2_D == `W2D_RD2_ALU)	?	ALU_C_W		:
							(F_GRF_RD2_D == `W2D_RD2_PC8)	?	pc8_W			:
							(F_GRF_RD2_D == `W2D_RD2_DM)	?	DM_out_W		:
							32'hxxxx_xxxx;


endmodule

module F_ALU_A_E_mux(
	input [31:0] N_RD1_E,
	input [31:0] ALU_C_M,
	input [31:0] pc8_M,
	input [31:0] ALU_C_W,
	input [31:0] pc8_W,
	input [31:0] DM_out_W,
	input [2:0] F_ALU_A_E,
	output [31:0] ALU_A_E
	);
	
	assign ALU_A_E	=	(F_ALU_A_E == `E_RD1_Normal)	?	N_RD1_E	:
							(F_ALU_A_E == `M2E_RD1_ALU)	?	ALU_C_M	:
							(F_ALU_A_E == `M2E_RD1_PC8)	?	pc8_M		:
							(F_ALU_A_E == `W2E_RD1_ALU)	?	ALU_C_W	:
							(F_ALU_A_E == `W2E_RD1_PC8)	?	pc8_W		:
							(F_ALU_A_E == `W2E_RD1_DM)		?	DM_out_W	:
							32'hxxxx_xxxx;

endmodule

module F_ALU_B_E_mux(
	input [31:0] N_RD2_E,
	input [31:0] ALU_C_M,
	input [31:0] pc8_M,
	input [31:0] ALU_C_W,
	input [31:0] pc8_W,
	input [31:0] DM_out_W,
	input [2:0] F_ALU_B_E,
	output [31:0] GRF_ALU_B_E
	);
	
	assign GRF_ALU_B_E	=	(F_ALU_B_E == `E_RD2_Normal)	?	N_RD2_E	:
									(F_ALU_B_E == `M2E_RD2_ALU)	?	ALU_C_M	:
									(F_ALU_B_E == `M2E_RD2_PC8)	?	pc8_M		:
									(F_ALU_B_E == `W2E_RD2_ALU)	?	ALU_C_W	:
									(F_ALU_B_E == `W2E_RD2_PC8)	?	pc8_W		:
									(F_ALU_B_E == `W2E_RD2_DM)		?	DM_out_W	:
									32'hxxxx_xxxx;

endmodule

module Alu_Div_mux(
	input [31:0] ALU_C_E,
	input [31:0] hi_E,
	input [31:0] lo_E,
	input [2:0] D_E_ALU_sel,
	output [31:0] RALU_C_E
	);
	
	assign RALU_C_E	=	(D_E_ALU_sel == `sel_hi_E)	?	hi_E	:
								(D_E_ALU_sel == `sel_lo_E)	?	lo_E	:
								ALU_C_E;
	

endmodule

module F_DM_RD2_M_mux(
	input [31:0] RD2_M,
	input [31:0] ALU_C_W,
	input [31:0] DM_out_W,
	input [2:0] F_DM_RD2_M,
	output [31:0] N_DM_Write_M
	);
	
	assign N_DM_Write_M	=	(F_DM_RD2_M == `M_RD2_Normal)	?	RD2_M		:
									(F_DM_RD2_M == `W2M_RD2_ALU)	?	ALU_C_W	:
									(F_DM_RD2_M == `W2M_RD2_DM)	?	DM_out_W	:
									32'hxxxx_xxxx;

endmodule

