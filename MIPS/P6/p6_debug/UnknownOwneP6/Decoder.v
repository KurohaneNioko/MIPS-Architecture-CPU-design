`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:47:08 12/11/2017 
// Design Name: 
// Module Name:    Decoder 
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
`include "macro.v"

module Decoder(
	input [31:0] IR_D,
	output Tuse_RS0,
	output Tuse_RS1,
	output Tuse_RT0, 
	output Tuse_RT1,
	output Tuse_RT2
    );
	wire [5:0] opcode, funct;
	wire [4:0] identify;
	assign opcode 	= IR_D[31:26];
	assign funct	= IR_D[5:0];
	assign identify = IR_D [20:16];
	//div∫Õmult“≤”–Tuse
	assign Tuse_RS0 = `beq | `bne | `blez | `bltz | `bgez | `bgtz | `jr | `jalr;
	assign Tuse_RS1 = `add | `addu | `addi | `addiu | `sub | `subu | `lb | `lbu | `lh | `lhu | `lw | 
							`sb | `sh | `sw | `ori | `xori | `And | `Or | `Xor | `Nor | `andi | `sllv | 
							`slt | `slti | `sltiu | `sltu | `srav |`srlv | `mthi | `mtlo | `div | `divu |
							`mult | `multu;
	
	assign Tuse_RT0 = `beq | `bne;
	assign Tuse_RT1 = `add | `addu | `sub | `subu | `And | `Or | `Xor | `Nor | `sll | `sra | `sllv |
							`srav | `srl | `slt | `sltu | `srlv | `div | `divu | `mult | `multu;
	assign Tuse_RT2 = `sb | `sh | `sw;

endmodule
