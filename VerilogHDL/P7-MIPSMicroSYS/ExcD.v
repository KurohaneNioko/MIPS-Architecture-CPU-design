`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:25:19 01/04/2018 
// Design Name: 
// Module Name:    ExcD 
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
module Exc(
	input clk,
	input reset,
	input EN,
    input [4:0] Excin,
    output [4:0] Excout
    );
	reg [4:0] exc;
	assign Excout = exc;
	initial begin
		exc = 0;
	end
	always @(posedge clk) begin
		if(reset) exc <= 0;
		if(~reset & EN) exc <= Excin;
	end
endmodule
