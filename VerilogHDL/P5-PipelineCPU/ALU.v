`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:38 12/19/2017 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] SrcA_E,
    input [31:0] SrcB_E,
    input [4:0] Shift_E,
    input [3:0] ALUCtrl,
    output [31:0] AO_E
    );
	wire signed [31:0] sgnA, sgnB;	//需要有符号数时记得用sgnA和sgnB，stl等
	//wire [31:0] r;
	`define ADD 0
	`define SUB 1
	`define OR  2
	`define MOVZ 3
	//`define AND 3
	//`define NOR 4
	//`define XOR 5
	//`define STL 6
	//`define STLU 7
	//`define SLL 8
	//`define SLLV 9
	//`define SRA 10
	//`define SRAV 11
	//`define SRL 12
	//`define SRLV 13
	
	assign sgnA = SrcA_E;
	assign sgnB = SrcB_E;
	assign AO_E = (ALUCtrl == `ADD)?SrcA_E + SrcB_E:
				  (ALUCtrl == `SUB)?SrcA_E - SrcB_E:
				  (ALUCtrl == `OR )?SrcA_E | SrcB_E:
				  (ALUCtrl == `MOVZ)?SrcA_E:SrcA_E + SrcB_E;
endmodule
