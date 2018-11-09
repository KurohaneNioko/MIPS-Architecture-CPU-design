`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:44:29 12/19/2017 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] Immin,
    input [1:0] EXTOp,
    output [31:0] ImmOut_D
    );
	`define ZERO 0
	`define SIGN 1
	`define LUI  2
	assign ImmOut_D = (EXTOp == `ZERO)?{16'b0, Immin[15:0]}:
					  (EXTOp == `SIGN)?{{16{Immin[15]}}, Immin[15:0]}:
					  (EXTOp == `LUI) ?{Immin[15:0], 16'b0}:0;
endmodule
