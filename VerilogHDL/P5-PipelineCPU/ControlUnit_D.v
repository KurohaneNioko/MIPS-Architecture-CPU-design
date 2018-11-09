`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:35:33 12/19/2017 
// Design Name: 
// Module Name:    ControlUnit_D 
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
`include "InstrDefine.v"
module ControlUnit_D(
    input [31:0] Instr,
    input CMPrst,
    output MUX_PC_sel,
    output [1:0] EXTCtrl
    );
	`define PCADD4		0
	`define NPC			1
	`define ZERO_EXT	0
	`define SIGNED_EXT  1
	`define LUI			2
	wire[31:0] instr;
	assign instr = Instr;	//b类指令是否跳转一定要加入CMPrst做判断
	assign MUX_PC_sel = ((`beq & CMPrst) | `j | `jal | `jr)?`NPC:`PCADD4;
	assign EXTCtrl = (`lw | `sw | `beq)?`SIGNED_EXT:
					 (`lui)?`LUI:`ZERO_EXT;
	
endmodule
