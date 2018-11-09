`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:02:46 12/20/2017 
// Design Name: 
// Module Name:    mult_div 
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

module mult_div(
	input clk,
	input reset,
	input [31:0] ALU_A_E,
	input [31:0] GRF_ALU_B_E,
	input [3:0] mult_div_sel_E,
	output start,
	output reg busy_E = 0,
	output reg [31:0] hi_E = 0,
	output reg [31:0] lo_E = 0
    );
	reg [63:0] prod = 0;
	reg [31:0] Divor = 0, Remder = 0;
	reg diff_m = 0, diff_d = 0;
	wire M_D;

	integer i = 0;

	assign M_D = 	(mult_div_sel_E == `start_mult)	|
						(mult_div_sel_E == `start_multu)	|
						(mult_div_sel_E == `start_div)	|
						(mult_div_sel_E == `start_divu)	;
						
/*	always @ (*) begin
		if(busy_E == 0) begin
			if(M_D) begin	//start立马就变成1了
				start <= 1;
			end
		end
	end*/
	assign start = M_D;
	
	always @ (posedge clk) begin
		if(reset) begin
			//应该是所有寄存器都清零，包括中间寄存器
			hi_E <= 0;
			lo_E <= 0;
			prod <= 0;
			i <= 0;
			Divor <= 0;
			Remder <= 0;
			busy_E <= 0;
			diff_m <= 0;
			diff_d <= 0;
		end
		if(start) begin
			if(mult_div_sel_E == `start_mult) begin
				busy_E <= 1;
				diff_m <= 1;
				i <= 4;
				prod <= $signed(ALU_A_E) * $signed(GRF_ALU_B_E);
			end
			else if(mult_div_sel_E == `start_multu) begin
				busy_E <= 1;
				diff_m <= 1;
				i <= 4;
				prod <= ALU_A_E * GRF_ALU_B_E;
			end
			else if(mult_div_sel_E == `start_div) begin
				busy_E <= 1;
				diff_d <= 1;
				i <= 9;
				Divor <= $signed(ALU_A_E) / $signed(GRF_ALU_B_E);
				Remder <= $signed(ALU_A_E) % $signed(GRF_ALU_B_E);
			end
			else if(mult_div_sel_E == `start_divu) begin
				busy_E <= 1;
				diff_d <= 1;
				i <= 9;
				Divor <= ALU_A_E / GRF_ALU_B_E;
				Remder <= ALU_A_E % GRF_ALU_B_E;
			end
		end
		else if(busy_E == 0) begin
			if(mult_div_sel_E == `start_mthi) begin
				hi_E <= ALU_A_E;
			end
			else if(mult_div_sel_E == `start_mtlo) begin
				lo_E <= ALU_A_E;
			end
		end
		else if(busy_E) begin
			i <= i - 1;
			if(i == 0) begin
				busy_E <= 0;
				if(diff_m) begin
					hi_E <= prod[63:32];
					lo_E <= prod[31:0];
					diff_m <= 0;
				end
				else if(diff_d) begin
					hi_E <= Remder;
					lo_E <= Divor;
					diff_d <= 0;
				end
			end
		end
	end


endmodule
