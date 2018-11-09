`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:27:13 12/11/2017 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
    input [5:0] OPCode,
    input [5:0] FuncCode,
    output Mem2Reg,
    output MemWrite,
    output [2:0] Branch,
    output ALUSrcB,
    output [3:0] ALUCtrl,
    output [1:0] ExtOP,
    output [1:0] RegDstA3,
    output RegWriteEN,
    output [2:0] Load,
    output JType,
    output JorJal,
    output Jalr
    );
	wire R, addu, subu, ori, lw, sw, beq, lui, jal, jr, jalr, j, addiu, _and, andi,
		bgez, blez, bne, sh, sb, lh, lhu, lb, lbu, sll, sllv, sra, srav,
		slt, slti, sltiu, sltu;
	assign 	R     = (OPCode == 6'b000000);
	assign 	addu  = (FuncCode == 6'b100001);	//R-Type
	assign	subu  = (FuncCode == 6'b100011);	//R-Type
	assign	ori   = (OPCode == 6'b001101);
	assign	lw    = (OPCode == 6'b100011);
	assign	sw    = (OPCode == 6'b101011);
	assign	beq   = (OPCode == 6'b000100);
	assign	lui   = (OPCode == 6'b001111);
	assign	jal   = (OPCode == 6'b000011);
	assign	jr    = (FuncCode == 6'b001000);	//R-Type
	assign  jalr  = (FuncCode == 6'b001001);	//R-Type
	assign  j	  = (OPCode == 6'b000010);
	assign  addiu = (OPCode == 6'b001001);
	assign  _and  = (FuncCode == 6'b100100);	//R-Type
	assign  andi  = (OPCode == 6'b001100);
	assign  bgez  = (OPCode == 6'b000001 && FuncCode == 6'b000001);
	assign  blez  = (OPCode == 6'b000110);
	assign  bne   = (OPCode == 6'b000101);
	assign  sh    = (OPCode == 6'b101001);
	assign  sb    = (OPCode == 6'b101000);
	assign  lh    = (OPCode == 6'b100001);
	assign  lhu   = (OPCode == 6'b100101);
	assign  lb    = (OPCode == 6'b100000);
	assign  lbu   = (OPCode == 6'b100100);
	assign  sll   = (FuncCode == 6'b000000);	//R-Type
	assign  sllv  = (FuncCode == 6'b000100);	//R-Type
	assign  sra   = (FuncCode == 6'b000011);	//R-Type
	assign  srav  = (FuncCode == 6'b000111);	//R-Type
	assign  slt   = (FuncCode == 6'b101010);	//R-Type
	assign  slti  =	(OPCode == 6'b001010);
	assign  sltiu = (OPCode == 6'b001011);
	assign  sltu  = (FuncCode == 6'b101011);	//R-Type
	
	assign RegWriteEN = (R & (addu | subu | jalr | sllv | sll | _and | sra | srav | slt)) |
						lui | jal | ori | lw | addiu | andi | lh | lhu | lb | lbu | slti | sltiu;
	assign RegDstA3 = (R & (addu | subu | jalr | _and | sllv | sll | sra | srav | slt))? 1 : 
					  (jal)? 2 : 0;
	assign ExtOP = (lw | sw | beq | addiu | sh | sb | lh | lhu | lb | lbu | slti | sltiu)? 1 :
				   (lui) ? 2:0;
	assign ALUSrcB = ori | lw | sw | lui | addiu | andi | sh | sb | lh | lhu | lb | lbu | slti | sltiu;
	assign ALUCtrl = ((R & (subu)) | beq | bne)?1:
					 (ori)? 					2:
					 ((R &_and) | andi)?		3:
					 ((R & slt) | slti)?		6:
					 (sltiu | (R & sltu))?		7:
					 (sll)?						8:
					 (R & sllv)?				9:
					 (R & sra)?					10:
					 (R & srav)?				11:0;
	assign Branch = beq?  1:
					bgez? 2:
					blez? 4:
					bne?  6:0;
	assign MemWrite = (sw | sh | sb);
	assign Mem2Reg = (lw | lh | lhu | lb | lbu);
	assign JType = (R & (jr | jalr))| jal | j;
	assign JorJal = jal | j;
	assign Load = (lw | sw )? 0:
				  (lh | sh )? 1:
				  (lhu| sb )? 2:
				  (lb)		? 3:
				  (lbu)		? 4:0;
	assign Jalr = R & jalr;
	
endmodule
