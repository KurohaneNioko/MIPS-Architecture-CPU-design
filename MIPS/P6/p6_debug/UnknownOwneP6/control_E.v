`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:28:23 12/12/2017 
// Design Name: 
// Module Name:    control_E 
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
module control_E(
	input [31:0] IR_E,
	output ALU_sel_E,			//需要mux
	output [1:0] Res_E,
	output [1:0] shiftop_E,
	output [3:0] mult_div_sel_E,
	output [2:0] D_E_ALU_sel,
	output [3:0] ALUOp_E
    );
	 
	wire [5:0] opcode, funct;
	
	assign 	opcode = IR_E [31:26],
				funct	 = IR_E [5:0];
				
//sll、srl、sra这几个是从Imm传过来移位个数的
//`add | `addu | `sub | `subu | `sll | `sllv | `slt | `sltu |
								//	`sra | `srav | `srl | `srlv | `And | `Or | `Xor | `Nor

	assign	ALU_sel_E	=	`add | `addu | `sub | `subu | `sllv | `srlv | `srav | `slt |
									`sltu | `And | `Or | `Xor | `Nor | `sll | `srl | `sra 		?	`sel_Rd2	:	
																													`sel_Imm;
	
	assign	Res_E		=	`add | `addu | `addi | `addiu | `andi | `sub | `subu | `ori | `lui | `xori |
								`sll | `sllv | `srlv | `srav | `srl | `sra | `slt | `sltu | `slti | `sltiu | 	
								`And | `Or | `Xor | `Nor |`mfhi | `mflo									?	`ALU	:
																			`lb | `lbu | `lh | `lhu | `lw		?	`DM	:
																									`jalr | `jal	?	`PC	:
																															`NW;
	
	assign	shiftop_E	=	`sllv | `srlv | `srav 	?	`sel_v	:
																		`sel_n;
	
	assign	mult_div_sel_E	=	`mult		?	`start_mult		:
										`multu	?	`start_multu	:
										`div		?	`start_div		:
										`divu		?	`start_divu		:
										`mthi		?	`start_mthi		:
										`mtlo		?	`start_mtlo		:	`no_start;
	
	assign	D_E_ALU_sel	=	`mfhi	?	`sel_hi_E	:
									`mflo	?	`sel_lo_E	:
									`sel_ALU_C_E;
	
	assign	ALUOp_E	=	`add | `addu | `addi | `addiu | `lui | `lb | `lbu | 
								`lh | `lhu |`lw | `sb | `sh | `sw 						?	`plus	:
								`sub | `subu 													?	`reduce	:
								`And | `andi													?	`and_		:
								`Or  | `ori														?	`or_		:
								`Xor | `xori													?	`xor_		:
								`Nor																?	`nor_		:
								`sll | `sllv													?	`sll_vn	:
								`srl | `srlv													?	`srl_vn	:
								`sra | `srav													?	`sra_vn	:
								`slt | `slti													?	`slt_		:
								`sltu | `sltiu													?	`sltu_	:
								3'bxxx;


endmodule
