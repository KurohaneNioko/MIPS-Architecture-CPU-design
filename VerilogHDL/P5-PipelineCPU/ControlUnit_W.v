`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:57:57 12/20/2017 
// Design Name: 
// Module Name:    ControlUnit_W 
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
`include "InstrDefine.v"
module ControlUnit_W(
    input clk,
    input reset,
    input [31:0] Instr_M,
    input CMPrst_M,
    output [1:0] Mem2Reg,
	output RegWE
    );
	reg[31:0] instr;
	reg cmprst;
	`define AO   0
	`define DM	 1
	`define LINK 2
	assign Mem2Reg = (`lw)?`DM:
					 (`jal)?`LINK:`AO;
	//¼Ä´æÆ÷Ð´Ê¹ÄÜ
	assign RegWE = (`addu | `subu | `ori | `lui |` lw | `jal | (`movz & cmprst));//(`bgezal & cmprst)
	initial begin
		instr <= 0;
		cmprst <= 0;
	end
	always @(posedge clk) begin
		if(reset) begin
			instr <= 0;
			cmprst <= 0;
		end
		else if (reset == 0) begin
			instr <= Instr_M;
			cmprst <= CMPrst_M;
		end
	end

endmodule
