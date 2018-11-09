`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:06:42 10/19/2017 
// Design Name: 
// Module Name:    OneBitAdder 
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
module OneBitAdder(
    input A,
    input B,
    input Clk,
    input En,
    output Sum,
    output Overflow
    );
	reg s1,s2;
	s1 = A;
	s2 = B;
	always @(posedge Clk) begin
		if(En) begin
			assign {Overflow, Sum} <= s1 + s2;
		end
	end
endmodule
