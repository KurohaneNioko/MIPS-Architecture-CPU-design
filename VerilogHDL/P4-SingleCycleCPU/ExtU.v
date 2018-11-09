`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:39:42 12/11/2017 
// Design Name: 
// Module Name:    ExtU 
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
module ExtU(
    input [15:0] ImmIn,
    input [1:0] ExtOP,
    output [31:0] ImmOut
    );
	assign ImmOut = (ExtOP == 0) ? {16'h0000,ImmIn[15:0]} :
					(ExtOP == 1) ? {{16{ImmIn[15]}},ImmIn[15:0]} :
					(ExtOP == 2) ? {16'h0000,ImmIn[15:0]}<<16 : 0;
endmodule
