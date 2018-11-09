`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:26:43 12/12/2017 
// Design Name: 
// Module Name:    Conflict_detection 
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
//需要判断写的新值在哪儿，然后根据这个判断是否冲突
module Conflict_detection(
	input Tuse_RS0,
	input Tuse_RS1,
	input Tuse_RT0,
	input Tuse_RT1,
	input Tuse_RT2,
	input busy_E,
	input start,
	input [1:0] Res_E,
	input [1:0] Res_M,
	input [1:0] Res_W,
	input [31:0] IR_D,
	input [31:0] IR_E,
	input [31:0] IR_M,
	input [31:0] IR_W,
	input [1:0] regdst_E,
	input [1:0] regdst_M,
	input [1:0] regdst_W,
	output [4:0] A3_E,
	output [4:0] A3_M,
	output [4:0] A3_W,
	output Stall_Data
    );
	 
	wire [4:0] RS, RT;
	wire [5:0] opcode, funct;
	
	assign opcode = IR_D[31:26];
	assign funct = IR_D[5:0];
	
	assign RS = IR_D[25:21];
	assign RT = IR_D[20:16];
	
	wire Stall_RS0_E1, Stall_RS0_E2, Stall_RS0_M1, Stall_RS1_E2;
	wire Stall_RT0_E1, Stall_RT0_E2, Stall_RT0_M1, Stall_RT1_E2;
	wire Stall_mult_div;
	wire Stall_RS, Stall_RT;
	
	//判断写地址
	assign A3_E = 	(regdst_E == `write_rt)	?	IR_E[20:16]	:
						(regdst_E == `write_rd)	?	IR_E[15:11]	:
						(regdst_E == `write_31)	?	5'b11111		:
						5'bxxxxx;
	
	assign A3_M = 	(regdst_M == `write_rt)	?	IR_M[20:16]	:
						(regdst_M == `write_rd)	?	IR_M[15:11]	:
						(regdst_M == `write_31)	?	5'b11111		:
						5'bxxxxx;
						
	assign A3_W = 	(regdst_W == `write_rt)	?	IR_W[20:16]	:
						(regdst_W == `write_rd)	?	IR_W[15:11]	:
						(regdst_W == `write_31)	?	5'b11111		:
						5'bxxxxx;
	
	assign Stall_RS0_E1 = Tuse_RS0 & (Res_E == `ALU) & (RS == A3_E) & (RS != 5'b00000);
	assign Stall_RS0_E2 = Tuse_RS0 & (Res_E == `DM)	 & (RS == A3_E) & (RS != 5'b00000);
	assign Stall_RS0_M1 = Tuse_RS0 & (Res_M == `DM)	 & (RS == A3_M) & (RS != 5'b00000);
	assign Stall_RS1_E2 = Tuse_RS1 & (Res_E == `DM)  & (RS == A3_E) & (RS != 5'b00000);
	//认为rs，rt暂停条件相同,要引入E级的写使能和M级的写使能（M级好像不需要）
	assign Stall_RT0_E1 = Tuse_RT0 & (Res_E == `ALU) & (RT == A3_E) & (RT != 5'b00000);
	assign Stall_RT0_E2 = Tuse_RT0 & (Res_E == `DM)	 & (RT == A3_E) & (RT != 5'b00000);
	assign Stall_RT0_M1 = Tuse_RT0 & (Res_M == `DM)	 & (RT == A3_M) & (RT != 5'b00000);
	assign Stall_RT1_E2 = Tuse_RT1 & (Res_E == `DM)  & (RT == A3_E) & (RT != 5'b00000);
	//乘除阻塞
	assign Stall_mult_div = (`mult | `multu | `div | `divu | `mfhi | `mflo | `mthi | `mtlo) & (busy_E | start);
	
	assign Stall_RS = Stall_RS0_E1 |
							Stall_RS0_E2 |
							Stall_RS0_M1 |
							Stall_RS1_E2 ;
							
	assign Stall_RT = Stall_RT0_E1 |
							Stall_RT0_E2 |
							Stall_RT0_M1 |
							Stall_RT1_E2 ;
	
	assign Stall_Data = Stall_RS | Stall_RT | Stall_mult_div;
	
endmodule
