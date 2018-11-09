`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:28:39 12/12/2017 
// Design Name: 
// Module Name:    control_M 
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
//产生了之后再传到W
//regdst流水线传
module control_M(
	input [31:0] IR_M,
	output [1:0] Res_M,
	output MemWrite_M,
	output RegWrite_M,
	output [3:0] DM_sel_M,
	output [1:0] Mem2Reg_M
    );
	wire [5:0] opcode, funct;
	
	assign 	opcode = IR_M [31:26],
				funct	 = IR_M [5:0];
				
	assign	MemWrite_M	=	`sb | `sh | `sw;
	
	assign	DM_sel_M	=	`lb	?	`sel_lb	:
								`lbu	?	`sel_lbu	:
								`lh	?	`sel_lh	:
								`lhu	?	`sel_lhu	:
								`lw	?	`sel_lw	:
								`sb	?	`sel_sb	:
								`sh	?	`sel_sh	:
								`sw	?	`sel_sw	:	4'b1111;
	
	assign	Res_M		=	`add | `addu | `addi | `addiu | `andi | `sub | `subu | `ori | `lui | `xori |
								`sll | `sllv | `srlv | `srav | `srl | `sra | `slt | `sltu | `slti | `sltiu | 	
								`And | `Or | `Xor | `Nor | `mfhi | `mflo									?	`ALU	:
																				`lb | `lbu | `lh | `lhu | `lw	?	`DM	:
																									`jalr | `jal	?	`PC	:
																															`NW;
	
	assign	RegWrite_M	=	(Res_M == `ALU)|(Res_M == `DM)|(Res_M == `PC);
 	
	assign	Mem2Reg_M	=	`jal | `jalr							?	`reg_jal	:
									`lb | `lbu | `lh | `lhu | `lw		?	`DM_data	:
																						`ALU_C;
	
endmodule
