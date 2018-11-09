`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:22:15 12/20/2017 
// Design Name: 
// Module Name:    ControlUnit_E 
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
`include "InstrDefine.v"
module ControlUnit_E(
	input clk,
	input reset,
    input [31:0] Instr_D,
    input CMPrst_D,
    output ALUSrcB,
    output [3:0] ALUCtrl,
	output [1:0] RegDst,
    output [31:0] Instr_E,
    output CMPrst_E
    );
	reg[31:0] instr;
	reg cmprst;
	assign Instr_E = instr;
	assign CMPrst_E = cmprst;
	`define RT  0
	`define RD	1
	`define RA  2
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
	assign ALUSrcB = `ori | `lw | `sw | `lui;
	//0->V2, 1->IMM
	assign ALUCtrl = (`subu)?`SUB:
					 (`ori)?`OR:
					 (`movz)?`MOVZ:`ADD;
	assign RegDst = (`addu | `subu | `movz)?`RD:
					(`jal)		   ?`RA:`RT;
	initial begin
		instr <= 0;
		cmprst <= 0;
	end
	always @(posedge clk) begin
		if(reset) begin		//mips:reset | Ìø×ªÊ§°ÜµÄÖ¸Áî(bgezal & ~CMPrst)
			instr <= 0;
			cmprst <= 0;
		end
		else if (reset == 0) begin
			instr <= Instr_D;
			cmprst <= CMPrst_D;
		end
	end
endmodule
