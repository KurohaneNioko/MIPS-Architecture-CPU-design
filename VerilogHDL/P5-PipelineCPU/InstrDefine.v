`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:19:00 12/19/2017 
// Design Name: 
// Module Name:    InstrDefine 
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
//此宏不要在NPC和CMP中使用
`define OP 		instr[31:26]
`define Func	instr[5:0]
`define R 		(`OP == 6'b000000)
`define addu	(`R & (`Func == 6'b100001))
`define subu	(`R & (`Func == 6'b100011))
`define ori     (`OP == 6'b001101)
`define lw      (`OP == 6'b100011)
`define sw      (`OP == 6'b101011)
`define beq     (`OP == 6'b000100)
`define lui     (`OP == 6'b001111)
`define j	    (`OP == 6'b000010)
`define jal     (`OP == 6'b000011)
`define jr      (`R & (`Func == 6'b001000))
`define movz	(`R & (`Func == 6'b001010))