`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:35:56 12/19/2017 
// Design Name: 
// Module Name:    Memory 
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
module Memory(
    input clk,
    input reset,
    input [31:0] AO_E,
    input [31:0] WDM_E,
    input [31:0] PC_E,
    input [31:0] PCAdd8_E,
	input [31:0] HIorLO_E,
	input [31:0] instr,
    output [31:0] AO_M,
    output [31:0] WDM_M,
    output [31:0] PC_M,
    output [31:0] PCAdd8_M,
	output [31:0] HIorLO_M,
	output [4:0] Exc_M
    );
	reg[31:0] ao, wdm, pc, pcadd8, hiorlo;
	assign AO_M = ao;
	assign WDM_M = wdm;
	assign PC_M = pc;
	assign PCAdd8_M = pcadd8;
	assign HIorLO_M = hiorlo;
	assign Exc_M = (`sw&(ao[1:0]!=2'b00))|(`sh&(ao[0]!=1'b0))|
	((`sw|`sh|`sb)&((ao[15:0]>16'h2fff & ao[15:0]<16'h7f00)|(ao[15:0]>16'h7f07 & ao[15:0]<16'h7f10)|(ao[15:0]>16'h7f17)))|
	((`sh|`sb)&((ao[15:0]>=16'h7f00 & ao[15:0]<=16'h7f0b)|(ao[15:0]>=16'h7f10 & ao[15:0]<=16'h7f1b)))?5:
	(`lw&(ao[1:0]!=2'b00))|((`lh|`lhu)&(ao[0]!=1'b0))|
	((`lw|`lh|`lb|`lhu|`lbu)&((ao[15:0]>16'h2fff & ao[15:0]<16'h7f00)|(ao[15:0]>16'h7f0b & ao[15:0]<16'h7f10)|(ao[15:0]>16'h7f1b)))|
	((`lh|`lhu|`lb|`lbu)&((ao[15:0]>=16'h7f00 & ao[15:0]<=16'h7f0b)|(ao[15:0]>=16'h7f10 & ao[15:0]<=16'h7f1b)))?4:0;
	initial begin
		ao <= 0;
		wdm <= 0;
		pc <= 0;
		pcadd8 <= 0;
		hiorlo <= 0;
	end
	always @(posedge clk) begin
		if(reset) begin
			ao <= 0;
			wdm <= 0;
			pcadd8 <= 0;
			hiorlo <= 0;
		end
		else if(reset == 0) begin
			ao <= AO_E;
			wdm <= WDM_E;
			pc <= PC_E;
			pcadd8 <= PCAdd8_E;
			hiorlo <= HIorLO_E;
		end
	end

endmodule
