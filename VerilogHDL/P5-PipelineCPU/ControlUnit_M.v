`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:45:32 12/20/2017 
// Design Name: 
// Module Name:    ControlUnit_M 
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
module ControlUnit_M(
    input clk,
    input reset,
    input [31:0] Instr_E,
    input CMPrst_E,
    output MemWrite,
    output [2:0] Load,
    output [31:0] Instr_M,
    output CMPrst_M
    );
	reg[31:0] instr;
	reg cmprst;
	assign Instr_M = instr;
	assign CMPrst_M = cmprst;
	assign MemWrite = (`sw );
	assign Load = (`lw | `sw )? 0:0;
				  /*(`lh | `sh )? 1:
				  (`lhu| `sb )? 2:
				  (`lb)		  ? 3:
				  (`lbu)	  ? 4:0;*/
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
			instr <= Instr_E;
			cmprst <= CMPrst_E;
		end
	end

endmodule
