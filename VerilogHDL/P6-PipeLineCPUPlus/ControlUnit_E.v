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
	input EN,
    output ALUSrcB,
    output [3:0] ALUCtrl,
	output [1:0] RegDst,
    output [31:0] Instr_E,
    output CMPrst_E,
	output HILOSel,
	output [3:0] MDCtrl
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
	`define AND 3
	`define NOR 4
	`define XOR 5
	`define SLT 6
	`define SLTU 7
	`define SLL 8
	`define SLLV 9
	`define SRA 10
	`define SRAV 11
	`define SRL 12
	`define SRLV 13
	`define MOVZ 14
	assign ALUSrcB = `ori | `lw | `sw | `lui | `addi | `addiu | `andi | `slti | `sltiu | `sh | `sb | `lh | `lhu | `lb | `lbu |
					 `xori;
	//0->V2, 1->IMM
	assign ALUCtrl = (`subu | `sub)?`SUB:
					 (`ori | `_or)?`OR:
					 (`_and | `andi)?`AND:
					 (`_nor)?`NOR:
					 (`_xor | `xori)?`XOR:
					 (`slt | `slti)?`SLT:
					 (`sltu | `sltiu)?`SLTU:
					 (`sll)?`SLL:
					 (`sllv)?`SLLV:
					 (`sra)?`SRA:
					 (`srav)?`SRAV:
					 (`srl)?`SRL:
					 (`srlv)?`SRLV:
					 (`movz)?`MOVZ:`ADD;
	assign RegDst = (`addu | `subu | `movz | `add | `sub | `srl | `sra | `sllv | `srlv | `srav | `_and | `_or | `_nor | `_xor | 
					 `slt | `sltu | `jalr | `sll | `mfhi | `mflo)?`RD:
					(`jal)		   ?`RA:`RT;
	assign HILOSel = (`mfhi)?0:1;//HI->0, LO->1
	`define MULT  0
	`define DIV   1
	`define MULTU 2
	`define DIVU  3
	`define MTHI  4
	`define MTLO  5
	assign MDCtrl = (`mult)? `MULT:
					(`div) ? `DIV:
					(`multu)?`MULTU:
					(`divu)? `DIVU:
					(`mthi)? `MTHI:
					(`mtlo)? `MTLO:15;
	initial begin
		instr <= 0;
		cmprst <= 0;
	end
	always @(posedge clk) begin
		if(reset) begin		//mips:reset | Ìø×ªÊ§°ÜµÄÖ¸Áî(bgezal & ~CMPrst)
			instr <= 0;
			cmprst <= 0;
		end
		else if (reset == 0 && EN == 1) begin
			instr <= Instr_D;
			cmprst <= CMPrst_D;
		end
		else if (reset == 0 && EN == 0) begin
			instr <= instr;
			cmprst <= cmprst;
		end
	end
endmodule
