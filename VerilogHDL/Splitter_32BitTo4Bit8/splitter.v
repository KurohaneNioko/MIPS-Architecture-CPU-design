`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:17:39 11/05/2017 
// Design Name: 
// Module Name:    splitter 
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
module splitter(
    input [31:0] A,
    output [7:0] O1,
    output [7:0] O2,
    output [7:0] O3,
    output [7:0] O4
    );
	assign {O1,O2,O3,O4} = A;
endmodule
