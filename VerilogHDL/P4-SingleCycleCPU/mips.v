`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:11:42 12/09/2017 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	wire jtype, jorjal, pcsrc, jalr, regwe, alusrc, bg, sml, eq, menwrite, mentoreg;
	wire [31:0] rd1, rd2, pcplus4, regdata, inst, srcb, imm, alurst, menread, pcout;
	wire [5:0] realfunc;
	wire [3:0] aluctrl;
	wire [2:0] branch, load;
	wire [1:0] regdst, extop;
	assign realfunc = (inst[31:26] == 6'b000001)?{1'b0, inst[20:16]}:inst[5:0];
	assign srcb = (inst[31:26] == 6'b000001)?32'b0: (alusrc == 0)?rd2:imm;
	assign pcsrc = (branch == 1)?eq:
				   (branch == 2)?eq|bg:
				   (branch == 3)?bg:
				   (branch == 4)?eq|sml:
				   (branch == 5)?sml:
				   (branch == 6)?bg|sml:1'b0;
	assign regdata = (mentoreg == 0)?alurst:menread;
	ControlUnit cu( .JType(jtype), .JorJal(jorjal), .OPCode(inst[31:26]), .FuncCode(realfunc), .Jalr(jalr),
					.RegWriteEN(regwe), .RegDstA3(regdst), .ExtOP(extop), .ALUSrcB(alusrc), .ALUCtrl(aluctrl),
					.MemWrite(menwrite), .Load(load), .Mem2Reg(mentoreg), .Branch(branch));
					
	IFU ifu( .JType(jtype), .JorJal(jorjal), .JumpAddr(rd1), .clk(clk), .reset(reset),
			 .PCAdd4(pcplus4), .PCSrc(pcsrc), .instr(inst), .PCout(pcout));
	
	GRF grf( .A1rsBase(inst[25:21]), .A2rt(inst[20:16]), .rd(inst[15:11]), .WriteData((jalr|jorjal)?pcplus4:regdata),
			 .clk(clk), .reset(reset), .WE(regwe), .RegdstA3(regdst), .RD1(rd1), .RD2(rd2), .PC(pcout));
			 
	ExtU extu( .ImmIn(inst[15:0]), .ExtOP(extop), .ImmOut(imm));
	ALU alu( .SrcA(rd1), .SrcB(srcb), .Shift(inst[10:6]), .ALUCtrl(aluctrl),
			 .bigger(bg), .equal(eq), .smaller(sml), .ALUResult(alurst));
	
	DM dm( .Addr(alurst), .WD(rd2), .clk(clk), .reset(reset), .WE(menwrite), .Load(load), .RD(menread), .PC(pcout));
endmodule
