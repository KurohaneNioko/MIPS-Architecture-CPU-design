`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:17:19 12/20/2017 
// Design Name: 
// Module Name:    HazardUnit 
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
module HazardUnit(
    input [31:0] Instr_D,
	input [31:0] Instr_E,
	input [31:0] Instr_M,
	input CMPrst,
	input [1:0] RegDst,
	input clk,
	input reset,
	input EN,
	output Stall,
	output [2:0] Fwd_V1_D,
	output [2:0] Fwd_V2_D,
	output [2:0] Fwd_V1_E,
	output [2:0] Fwd_V2_E,
	output [2:0] Fwd_WDM_M,
	output Fwd_eret,
	output [4:0] A3
    );
	`define RT  0
	`define RD	1
	`define RA  2
	`define CP0 3
	wire [2:0] res_D, res_E, res_M, res_W;
	//wire [2:0] fwd_V1_D, fwd_V2_D, fwd_V1_E, fwd_V2_E, fwd_WDM_M;
	wire [4:0] a3_E, a3_M, a3_W, rs_D, rt_D, rd_D, rs_E, rt_E, rd_E, rt_M;
	//wire stall;
	assign a3_E = (RegDst == `RT)?rt_E:
				  (RegDst == `RA)?31:
				  (RegDst == `RD)?rd_E:0;
	assign A3 = a3_W;
	StallUnit su(.Instr_D(Instr_D), .CMPrst(CMPrst), .Res_E(res_E), .Res_M(res_M), .Res_W(res_W), .A3_E(a3_E), .A3_M(a3_M),
				 .Stall(Stall), .rs_D(rs_D), .rt_D(rt_D), .rd_D(rd_D), .Res_D(res_D), .Instr_E(Instr_E));
	ForwardUnit forward(.rs_D(rs_D), .rt_D(rt_D), .rs_E(rs_E), .rt_E(rt_E), .rt_M(rt_M), .Instr_M(Instr_M), .Instr_D(Instr_D),
		/* ‰»Î*/			.A3_E(a3_E), .A3_M(a3_M), .A3_W(a3_W), .Res_E(res_E), .Res_M(res_M), .Res_W(res_W),
						/* ‰≥ˆ*/
						.Fwd_RegV1_D(Fwd_V1_D), .Fwd_RegV2_D(Fwd_V2_D), .Fwd_eret(Fwd_eret),
						.Fwd_ALUA_E(Fwd_V1_E), .Fwd_ALUB_E(Fwd_V2_E), .Fwd_WDM_M(Fwd_WDM_M));
	ResE res_Exe(.rs_D(rs_D), .rt_D(rt_D), .rd_D(rd_D), .Res_D(res_D), .clk(clk), .reset(reset | Stall|(~EN)), .EN(reset|(~reset)),
			     .rs_E(rs_E), .rt_E(rt_E), .rd_E(rd_E), .Res_E(res_E));
	ResM res_Mem(.Res_E(res_E), .A3_E(a3_E), .rt_E(rt_E), .clk(clk), .reset(reset),
			     .Res_M(res_M), .A3_M(a3_M), .rt_M(rt_M));
	ResW res_Wri(.Res_M(res_M), .A3_M(a3_M), .clk(clk), .reset(reset),
			     .Res_W(res_W), .A3_W(a3_W));
endmodule
