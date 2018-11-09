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
`define add		(`R & (`Func == 6'b100000))
`define addi	(`OP == 6'b001000)
`define addiu	(`OP == 6'b001001)
`define sub		(`R & (`Func == 6'b100010))
`define sll		(`R & (`Func == 6'b000000))
`define srl		(`R & (`Func == 6'b000010))
`define sra		(`R & (`Func == 6'b000011))
`define sllv	(`R & (`Func == 6'b000100))
`define srlv	(`R & (`Func == 6'b000110))
`define srav	(`R & (`Func == 6'b000111))
`define _and	(`R & (`Func == 6'b100100))
`define _or		(`R & (`Func == 6'b100101))
`define _nor	(`R & (`Func == 6'b100111))
`define _xor	(`R & (`Func == 6'b100110))
`define andi	(`OP == 6'b001100)
`define xori	(`OP == 6'b001110)
`define slt		(`R & (`Func == 6'b101010))
`define slti	(`OP == 6'b001010)
`define sltu	(`R & (`Func == 6'b101011))
`define sltiu	(`OP == 6'b001011)
`define bne		(`OP == 6'b000101)
`define blez	(`OP == 6'b000110)
`define bgez	((`OP == 6'b000001) & (instr[20:16] == 5'b00001))
`define bgtz	(`OP == 6'b000111)
`define bltz	((`OP == 6'b000001) & (instr[20:16] == 5'b00000))
`define jalr	(`R & (`Func == 6'b001001))
`define sh		(`OP == 6'b101001)
`define sb		(`OP == 6'b101000)
`define lh		(`OP == 6'b100001)
`define lhu		(`OP == 6'b100101)
`define lb		(`OP == 6'b100000)
`define lbu		(`OP == 6'b100100)
`define mult	(`R & (`Func == 6'b011000))
`define multu	(`R & (`Func == 6'b011001))
`define div		(`R & (`Func == 6'b011010))
`define divu	(`R & (`Func == 6'b011011))
`define mfhi	(`R & (`Func == 6'b010000))
`define mflo	(`R & (`Func == 6'b010010))
`define mthi	(`R & (`Func == 6'b010001))
`define mtlo	(`R & (`Func == 6'b010011))