`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:57:14 12/10/2017 
// Design Name: 
// Module Name:    CMP 
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

module CMP(
	input	[31:0] N_RD1_D,
	input [31:0] N_RD2_D,
	input	[3:0] Branch_D,
	output [1:0] pc_sel
    );
	assign	pc_sel	=	((Branch_D == `npc_beq)&(N_RD1_D == N_RD2_D))		|
								((Branch_D == `npc_bne)&(N_RD1_D != N_RD2_D))		|
								((Branch_D == `npc_blez)&($signed(N_RD1_D) <= 0))	|
								((Branch_D == `npc_bltz)&($signed(N_RD1_D) < 0))	|
								((Branch_D == `npc_bgez)&($signed(N_RD1_D) >= 0))	|
								((Branch_D == `npc_bgtz)&($signed(N_RD1_D) > 0))	|
								(Branch_D == `npc_jal)										|
								(Branch_D == `npc_j)											?	`NPC	:
								(Branch_D == `npc_jr) |	(Branch_D == `npc_jalr)		?	`NPC_REG	:
								`ADD4;


endmodule
