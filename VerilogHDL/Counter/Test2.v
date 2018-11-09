`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:23:52 10/19/2017 
// Design Name: 
// Module Name:    Test2 
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
module Test2(
    input clk,
    input a,
    input b,
    output reg[31:0] c
    );
	initial
	begin
		c = {^(32'ha081), {2{0}}, |(32'o11)};
		
	end
	always@(posedge clk)
	begin
	$display("%B",c);
	end
	
	//assign c=men;
	
endmodule
