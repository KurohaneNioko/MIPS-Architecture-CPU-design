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
	reg[31:0] IM[0:1023];
	integer i;
	initial begin
		for(i=0;i<1024;i=i+1) begin
			IM[i] = 0;
		end	
		$readmemh("code.txt",IM);
	end
	assign Instr_F = IM[PC[11:2]];
endmodule
