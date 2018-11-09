`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:46:25 10/19/2017 
// Design Name: 
// Module Name:    adder 
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
module adder(
    input [3:0] A,
    input [3:0] B,
    input Clk,
    input En,
    output [3:0] Sum,
    output Overflow
    );
	 
	 reg[4:0] temp;
	 assign {Overflow,Sum}=temp;
	 initial 
		temp = 5'b00000;
	 always @(posedge Clk) begin
		if(En) temp <= A + B;
	 end
endmodule
