`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:24:39 11/28/2017 
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
    input [15:0] Imm,
    input [1:0] EXTOp,
    output [31:0] ExtedImm
    );
	assign ExtedImm=(EXTOp==0)?{{16{Imm[15]}},Imm[15:0]}:
							(EXTOp==1)?{{16{1'b0}},Imm[15:0]}:
							(EXTOp==2)?{Imm[15:0],{16'h0000}}:0;
endmodule
