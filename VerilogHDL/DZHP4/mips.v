`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:41:13 11/28/2017 
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
	/* output [31:0] data,
	 output [31:0] alures,
	 output [31:0] instr,
	 output [31:0] pc*/
    );
wire [31:0] pc,pcnext,pcplus4,pcbranch;//
wire [31:0] rd1,alusrcb,rd2,wd,extedimm,instr,alures,data;//
wire memwrite,alusrc,regwrite,ezero;
wire [1:0] memtoreg,pcsrc,regdst,extop;
wire [2:0] aluop,dmop;
wire [4:0] regwa;// reg write address
PC pcnter(.pc(pc),.n_pc(pcnext),.clk(clk),.reset(reset));
assign pcplus4=pc+4;
assign pcbranch=pcplus4+{extedimm[29:0],2'b00};
mux4 #32 muxpcnext(.d0(pcplus4),.d1(pcbranch),.d2({pcplus4[31:28],instr[25:0],2'b00}),.d3(rd1),.sel(pcsrc),.y(pcnext));
IM im(.A(pc),.RD(instr));
Control_Unit c(.Opcode(instr[31:26]),.Funct(instr[5:0]),
					 .eZero(ezero),
					 .MemtoReg(memtoreg),
					 .MemWrite(memwrite),
					 .ALUSrc(alusrc),
					 .RegDst(regdst),
					 .RegWrite(regwrite),
					 .pcSrc(pcsrc),
					 .ALUOp(aluop),
					 .EXTOp(extop),
					 .DMOp(dmop));
GRF grf(.A1(instr[25:21]),.A2(instr[20:16]),.A3(regwa),.WE3(regwrite),.RD1(rd1),.RD2(rd2),.WD(wd),.pc(pc),.clk(clk),.reset(reset));
mux4 #5 muxregwa(.d0(instr[20:16]),.d1(instr[15:11]),.d2(5'b11111),.sel(regdst),.y(regwa));
ALU alu(.A(rd1),.B(alusrcb),.ALUOp(aluop),.isZero(ezero),.Y(alures));
mux2 #32 muxalusrcb(.d0(rd2),.d1(extedimm),.sel(alusrc),.y(alusrcb));
EXT ext(.Imm(instr[15:0]),.ExtedImm(extedimm),.EXTOp(extop));

DM dm(.A(alures),.WD(rd2),.RD(data),.WE(memwrite),.pc(pc),.clk(clk),.reset(reset),.DMOp(dmop));
mux4 #32 muxres(.d0(alures),.d1(data),.d2(pcplus4),.sel(memtoreg),.y(wd));
endmodule
