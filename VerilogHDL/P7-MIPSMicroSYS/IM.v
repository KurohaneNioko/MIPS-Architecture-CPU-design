`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:41:09 12/19/2017 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] PC,
    output [31:0] Instr_F
    );
	reg[31:0] IM[0:4095];
	wire[31:0] addr;
	integer i;
	initial begin
		for(i=0;i<4096;i=i+1) begin
			IM[i] = 0;
		end	
		$readmemh("code.txt",IM);
		$readmemh("code_handler.txt",IM,1120,2047);
	end
	assign addr = PC-32'h00003000;
	assign Instr_F = IM[addr[31:2]];
endmodule
