`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:06:35 12/19/2017 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
    input [31:0] RegRead,
    input [15:0] Offset,
    input [31:0] PC,
	input [25:0] InstrIndex,
    input [31:0] PCAdd4,
    input [31:0] Instr,
    output [31:0] NPCout,
    output [31:0] PCAdd8
    );
	wire[5:0] OP, Func;
	wire R, beq, j, jal, jr, jalr, bne, blez, bgtz, bltz, bgez;
	assign OP	  =  Instr[31:26];
	assign Func   =  Instr[5:0];
	parameter JorJal =  3;
	parameter JumpReg=  2;
	parameter Branch =  1;
	assign R      =	 (OP == 6'b000000);
	assign beq    =	 (OP == 6'b000100);
	assign j	  =	 (OP == 6'b000010);
	assign jal	  =	 (OP == 6'b000011);
	assign jr	  =	 (R & (Func == 6'b001000));
	assign jalr   =  (R & (Func == 6'b001001));
	assign bgez   =  ((OP == 6'b000001) & (Instr[20:16] == 5'b00001));
	assign blez   =  (OP == 6'b000110);
	assign bgtz   =  (OP == 6'b000111);
	assign bltz	  =  ((OP == 6'b000001) & (Instr[20:16] == 5'b00000));
	assign bne    =  (OP == 6'b000101);
	wire [2:0] NPCsel;
	assign NPCsel = (beq | bne | blez | bgez | bgtz | bltz)	 ?Branch:
					(j | jal)?JorJal:
					(jr | jalr)	 ?JumpReg:0;
	assign PCAdd8 = PC + 8;
	assign NPCout = (NPCsel == JorJal) ?{PC[31:28],InstrIndex[25:0],2'b00}:
					(NPCsel == JumpReg)?RegRead:
					(NPCsel == Branch) ?PCAdd4 + {{14{Offset[15]}},Offset,2'b00}: PCAdd4;
endmodule
