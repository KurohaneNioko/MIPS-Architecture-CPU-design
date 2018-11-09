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
module Memory(
    input clk,
    input reset,
    input [31:0] AO_E,
    input [31:0] WDM_E,
    input [31:0] PC_E,
    input [31:0] PCAdd8_E,
    output [31:0] AO_M,
    output [31:0] WDM_M,
    output [31:0] PC_M,
    output [31:0] PCAdd8_M
    );
	reg[31:0] ao, wdm, pc, pcadd8;
	assign AO_M = ao;
	assign WDM_M = wdm;
	assign PC_M = pc;
	assign PCAdd8_M = pcadd8;
	initial begin
		ao <= 0;
		wdm <= 0;
		pc <= 0;
		pcadd8 <= 0;
	end
	always @(posedge clk) begin
		if(reset) begin
			ao <= 0;
			wdm <= 0;
			pc <= 0;
			pcadd8 <= 0;
		end
		else if(reset == 0) begin
			ao <= AO_E;
			wdm <= WDM_E;
			pc <= PC_E;
			pcadd8 <= PCAdd8_E;
		end
	end

endmodule
