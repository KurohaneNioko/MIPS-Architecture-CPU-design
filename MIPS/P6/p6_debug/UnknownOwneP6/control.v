`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:23:27 12/10/2017 
// Design Name: 
// Module Name:    controller 
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

module control_D(
	input [31:0] IR_D,
	output [2:0] Extop_D,
	/*output MemWrite_D,
	output RegWrite_D,
	output ALU_sel_D,	*/		//需要mux
	output [1:0] Res_D,
	output [3:0] Branch_D,
	output [1:0] regdst_D	
	/*output [1:0] Mem2Reg_D*/	
    );
	wire [5:0] opcode, funct;
	wire [4:0] identify;
	
	assign 	opcode = IR_D [31:26],
				identify = IR_D [20:16],
				funct	 = IR_D [5:0];
	//这里
	assign	Extop_D	=	`lb | `lbu | `lh | `lhu | `lw | `sb | `sh | `sw | 
								`addi	| `addiu | `slti | `sltiu						?	`sign_ext	:
								`ori | `andi | `xori | `sll | `sra | `srl			?	`zero_ext	:
								`lui															?	`low_zero_ext	:
								3'bxxx;
	
	assign	Res_D		=	`add |`addu | `addi | `addiu | `andi | `lui	| `ori | `xori | `sub | `subu |
								`And | `Or | `Xor | `Nor | `slt | `sltu | `slti | `sltiu |
								`sll | `sllv | `srl | `sra | `srlv | `srav									?	`ALU	:
																					`lb | `lbu | `lh | `lhu | `lw	?	`DM	:
																										`jalr | `jal	?	`PC	:
																																`NW;
	
	assign	Branch_D		=	`beq		?	`npc_beq		:
									`bne		?	`npc_bne		:
									`blez		?	`npc_blez	:
									`bltz		?	`npc_bltz	:
									`bgez		?	`npc_bgez	:
									`bgtz		?	`npc_bgtz	:
									`j			?	`npc_j		:
									`jr		?	`npc_jr		:
									`jal		?	`npc_jal		:
									`jalr		?	`npc_jalr	:
									`normal;
	
	assign	regdst_D		=	`add | `addu | `sub | `subu | `sll | `sllv | `slt | `sltu | `jalr |
									`sra | `srav | `srl | `srlv | `And | `Or | `Xor | `Nor | `mfhi | `mflo	?	`write_rd:
									`jal 	?	`write_31	:	`write_rt;



endmodule
