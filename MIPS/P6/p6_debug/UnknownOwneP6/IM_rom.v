`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:06:05 12/09/2017 
// Design Name: 
// Module Name:    IM_rom 
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
module IM_rom(
	input [31:0] pc,
	output [31:0] IR 					//instruction
    );
	 reg [31:0] pc_rom [0:4095];	//ROM
	 wire [31:0] temp_pc;
	 wire [11:0] temp;					//当前pc指令地址
	 
	 assign temp_pc = pc - 32'h0000_3000;	//对pc进行减
	 assign temp = temp_pc[13:2];
	 
	 initial begin
		$readmemh("code.txt",pc_rom);
	 end
	
	 assign IR = pc_rom [temp];

endmodule
