`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:38 12/19/2017 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] SrcA_E,
    input [31:0] SrcB_E,
    input [4:0] Shift_E,
    input [3:0] ALUCtrl,
    output[31:0] AO_E,
	output Overflow
    );
	wire signed [31:0] sgnA, sgnB, sraO, sravO;	//需要有符号数时记得用sgnA和sgnB，stl等
	wire [32:0] temp;
	`define ADD 0
	`define SUB 1
	`define OR  2
	`define AND 3
	`define NOR 4
	`define XOR 5
	`define SLT 6
	`define SLTU 7
	`define SLL 8
	`define SLLV 9
	`define SRA 10
	`define SRAV 11
	`define SRL 12
	`define SRLV 13
	`define MOVZ 14
	assign sgnA = SrcA_E;
	assign sgnB = SrcB_E;
	assign temp = (ALUCtrl == `ADD) ?{SrcA_E[31],SrcA_E} + {SrcB_E[31],SrcB_E}:
				  (ALUCtrl == `SUB) ?{SrcA_E[31],SrcA_E} - {SrcB_E[31],SrcB_E}:33'b0;
	assign Overflow = (temp[32] != temp[31]);
	assign AO_E = (ALUCtrl == `ADD) ?SrcA_E + SrcB_E:
				  (ALUCtrl == `SUB) ?SrcA_E - SrcB_E:
				  (ALUCtrl == `OR ) ?SrcA_E | SrcB_E:
				  (ALUCtrl == `AND) ?SrcA_E & SrcB_E:
				  (ALUCtrl == `NOR) ?~(SrcA_E | SrcB_E):
				  (ALUCtrl == `XOR) ?SrcA_E ^ SrcB_E:
				  (ALUCtrl == `SLT) ?(sgnA < sgnB):
				  (ALUCtrl == `SLTU)?SrcA_E < SrcB_E:
				  (ALUCtrl == `SLL) ?SrcB_E << Shift_E:
				  (ALUCtrl == `SLLV)?SrcB_E << SrcA_E[4:0]:
				  (ALUCtrl == `SRA) ?sraO:
				  (ALUCtrl == `SRAV)?sravO:
				  (ALUCtrl == `SRL) ?SrcB_E >> Shift_E:
				  (ALUCtrl == `SRLV)?SrcB_E >> SrcA_E[4:0]:
				  (ALUCtrl == `MOVZ)?SrcB_E:SrcA_E + SrcB_E;
				  
	assign sraO = (Shift_E ==  0)?  {{0{sgnB[31]}},sgnB[31:0]}:
				  (Shift_E ==  1)?  {{1{sgnB[31]}},sgnB[31:1]}:
				  (Shift_E ==  2)?  {{2{sgnB[31]}},sgnB[31:2]}:
				  (Shift_E ==  3)?  {{3{sgnB[31]}},sgnB[31:3]}:
				  (Shift_E ==  4)?  {{4{sgnB[31]}},sgnB[31:4]}:
				  (Shift_E ==  5)?  {{5{sgnB[31]}},sgnB[31:5]}:
				  (Shift_E ==  6)?  {{6{sgnB[31]}},sgnB[31:6]}:
				  (Shift_E ==  7)?  {{7{sgnB[31]}},sgnB[31:7]}:
				  (Shift_E ==  8)?  {{8{sgnB[31]}},sgnB[31:8]}:
				  (Shift_E ==  9)?  {{9{sgnB[31]}},sgnB[31:9]}:
				  (Shift_E == 10)? {{10{sgnB[31]}},sgnB[31:10]}:
				  (Shift_E == 11)? {{11{sgnB[31]}},sgnB[31:11]}:
				  (Shift_E == 12)? {{12{sgnB[31]}},sgnB[31:12]}:
				  (Shift_E == 13)? {{13{sgnB[31]}},sgnB[31:13]}:
				  (Shift_E == 14)? {{14{sgnB[31]}},sgnB[31:14]}:
				  (Shift_E == 15)? {{15{sgnB[31]}},sgnB[31:15]}:
				  (Shift_E == 16)? {{16{sgnB[31]}},sgnB[31:16]}:
				  (Shift_E == 17)? {{17{sgnB[31]}},sgnB[31:17]}:
				  (Shift_E == 18)? {{18{sgnB[31]}},sgnB[31:18]}:
				  (Shift_E == 19)? {{19{sgnB[31]}},sgnB[31:19]}:
				  (Shift_E == 20)? {{20{sgnB[31]}},sgnB[31:20]}:
				  (Shift_E == 21)? {{21{sgnB[31]}},sgnB[31:21]}:
				  (Shift_E == 22)? {{22{sgnB[31]}},sgnB[31:22]}:
				  (Shift_E == 23)? {{23{sgnB[31]}},sgnB[31:23]}:
				  (Shift_E == 24)? {{24{sgnB[31]}},sgnB[31:24]}:
				  (Shift_E == 25)? {{25{sgnB[31]}},sgnB[31:25]}:
				  (Shift_E == 26)? {{26{sgnB[31]}},sgnB[31:26]}:
				  (Shift_E == 27)? {{27{sgnB[31]}},sgnB[31:27]}:
				  (Shift_E == 28)? {{28{sgnB[31]}},sgnB[31:28]}:
				  (Shift_E == 29)? {{29{sgnB[31]}},sgnB[31:29]}:
				  (Shift_E == 30)? {{30{sgnB[31]}},sgnB[31:30]}:
				  (Shift_E == 31)? {{31{sgnB[31]}},sgnB[31:31]}:{32{sgnB[31]}};
				  
	assign sravO =(SrcA_E[4:0] ==  0)?  {{0{sgnB[31]}},sgnB[31:0]}:
				  (SrcA_E[4:0] ==  1)?  {{1{sgnB[31]}},sgnB[31:1]}:
				  (SrcA_E[4:0] ==  2)?  {{2{sgnB[31]}},sgnB[31:2]}:
				  (SrcA_E[4:0] ==  3)?  {{3{sgnB[31]}},sgnB[31:3]}:
				  (SrcA_E[4:0] ==  4)?  {{4{sgnB[31]}},sgnB[31:4]}:
				  (SrcA_E[4:0] ==  5)?  {{5{sgnB[31]}},sgnB[31:5]}:
				  (SrcA_E[4:0] ==  6)?  {{6{sgnB[31]}},sgnB[31:6]}:
				  (SrcA_E[4:0] ==  7)?  {{7{sgnB[31]}},sgnB[31:7]}:
				  (SrcA_E[4:0] ==  8)?  {{8{sgnB[31]}},sgnB[31:8]}:
				  (SrcA_E[4:0] ==  9)?  {{9{sgnB[31]}},sgnB[31:9]}:
				  (SrcA_E[4:0] == 10)? {{10{sgnB[31]}},sgnB[31:10]}:
				  (SrcA_E[4:0] == 11)? {{11{sgnB[31]}},sgnB[31:11]}:
				  (SrcA_E[4:0] == 12)? {{12{sgnB[31]}},sgnB[31:12]}:
				  (SrcA_E[4:0] == 13)? {{13{sgnB[31]}},sgnB[31:13]}:
				  (SrcA_E[4:0] == 14)? {{14{sgnB[31]}},sgnB[31:14]}:
				  (SrcA_E[4:0] == 15)? {{15{sgnB[31]}},sgnB[31:15]}:
				  (SrcA_E[4:0] == 16)? {{16{sgnB[31]}},sgnB[31:16]}:
				  (SrcA_E[4:0] == 17)? {{17{sgnB[31]}},sgnB[31:17]}:
				  (SrcA_E[4:0] == 18)? {{18{sgnB[31]}},sgnB[31:18]}:
				  (SrcA_E[4:0] == 19)? {{19{sgnB[31]}},sgnB[31:19]}:
				  (SrcA_E[4:0] == 20)? {{20{sgnB[31]}},sgnB[31:20]}:
				  (SrcA_E[4:0] == 21)? {{21{sgnB[31]}},sgnB[31:21]}:
				  (SrcA_E[4:0] == 22)? {{22{sgnB[31]}},sgnB[31:22]}:
				  (SrcA_E[4:0] == 23)? {{23{sgnB[31]}},sgnB[31:23]}:
				  (SrcA_E[4:0] == 24)? {{24{sgnB[31]}},sgnB[31:24]}:
				  (SrcA_E[4:0] == 25)? {{25{sgnB[31]}},sgnB[31:25]}:
				  (SrcA_E[4:0] == 26)? {{26{sgnB[31]}},sgnB[31:26]}:
				  (SrcA_E[4:0] == 27)? {{27{sgnB[31]}},sgnB[31:27]}:
				  (SrcA_E[4:0] == 28)? {{28{sgnB[31]}},sgnB[31:28]}:
				  (SrcA_E[4:0] == 29)? {{29{sgnB[31]}},sgnB[31:29]}:
				  (SrcA_E[4:0] == 30)? {{30{sgnB[31]}},sgnB[31:30]}:
				  (SrcA_E[4:0] == 31)? {{31{sgnB[31]}},sgnB[31:31]}:{32{sgnB[31]}};
endmodule
