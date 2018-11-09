`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:49:17 12/19/2017 
// Design Name: 
// Module Name:    Decode 
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
module Decode(
    input [31:0] PC_F,
    input [31:0] PCAdd4_F,
    input [31:0] Instr_F,
    input EN,
    input clk,
    input reset,
    output [31:0] PC_D,
    output [31:0] PCAdd4_D,
    output [31:0] Instr_D,
	output [4:0] Exc_D
    );
	reg[31:0] pc, pcadd4, instr;
	wire RI;
	assign RI = ~(`addu|`subu|`ori|`lui|`lw|`sw|`beq|`j|`jal|`jr|`add|`addi|`addiu|`sub|`sll|`srl|`sra|`sllv|`srlv|
				  `srav|`_and|`_or|`_nor|`_xor|`andi|`xori|`slt|`slti|`sltiu|`sltu|`bne|`blez|`bgez|`bgtz|`bltz|`jalr|
				  `sh|`sb|`lh|`lhu|`lb|`lbu|`mult|`multu|`div|`divu|`mthi|`mtlo|`mfhi|`mflo|`mfc0|`mtc0|`eret);
	assign PC_D = pc;
	assign PCAdd4_D = pcadd4;
	assign Instr_D = instr;
	assign Exc_D = (RI)?10:0;
	initial begin
		pc <= 32'h00003000;
		pcadd4 <= 32'h00003004;
		instr <= 0;
	end
	always @(posedge clk) begin
		if(reset |(`eret & EN)) begin
			pcadd4 <= 32'h00003004;
			instr <= 0;
		end
		else if(reset == 0 && EN == 1) begin
			pc <= PC_F;
			pcadd4 <= PCAdd4_F;
			instr <= Instr_F;			
		end
		else if(reset == 0 && EN == 0) begin
			pc <= pc;
			pcadd4 <= pcadd4;
			instr <= instr;
		end
	end
endmodule
