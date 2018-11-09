`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:19:31 12/09/2017 
// Design Name: 
// Module Name:    Reg_D 
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
module Reg_D(
	input clk,
	input reset,					//在分支指令时，branch成功，寄存器直接清零
	input D_En,							//虽然多加了一个clr但是处理了jr和暂停的优先级问题
	input [31:0] IR,
	input [31:0] pc,
	input [31:0] pc8,
	output reg [31:0] IR_D,
	output reg [31:0] pc_D,
	output reg [31:0] pc8_D
    );
	
	always @ (posedge clk) begin
		if(reset) begin
			IR_D 	<= 0;
			pc_D	<= 0;
			pc8_D	<= 0;
		end
		else if(D_En) ;
		else begin
			IR_D	<= IR;
			pc_D	<= pc;
			pc8_D	<= pc8;
		end
	end

endmodule
