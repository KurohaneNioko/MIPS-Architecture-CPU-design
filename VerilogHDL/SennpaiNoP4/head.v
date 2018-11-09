`define CLK_FRQ             100000
`define CYCLE               (10000000/`CLK_FRQ) //1000000000

`define R   6'b00_0000
`define addu  6'b10_0001
`define subu  6'b10_0011
`define ori   6'b00_1101
`define lw    6'b10_0011
`define sw    6'b10_1011
`define beq   6'b00_0100
`define lui   6'b00_1111
`define j     6'b00_0010
`define jal   6'b00_0011

`timescale  1ns/1ns