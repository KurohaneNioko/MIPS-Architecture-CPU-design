`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:53:38 10/22/2017 
// Design Name: 
// Module Name:    Test0000 
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
module Test0000(
	 input clk,
	 input in,
	 output reg out = 0
    );
	 reg buff = 0;
	 always @(posedge clk) begin
		 
		 out = buff;
		 buff = in;
	 end
	 
endmodule
