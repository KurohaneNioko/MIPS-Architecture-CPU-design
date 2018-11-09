`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:20:04 12/09/2017 
// Design Name: 
// Module Name:    Reg_M 
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
//可以根据regdst和IR判断写地址
module Reg_M(
	input clk,
	input reset,
	input [31:0] IR_E,
	input [31:0] RALU_C_E,
	input [31:0] DM_Write_E,	//rt
	input [1:0] regdst_E,	
	input [31:0] pc_E,
	input [31:0] pc8_E,
	
	output reg [31:0] IR_M,
	output reg [31:0] ALU_C_M,
	output reg [31:0] DM_Write_M,
	output reg [1:0] regdst_M,	
	output reg [31:0] pc_M,
	output reg [31:0] pc8_M
    );
	
	always @(posedge clk) begin
		if(reset) begin
			IR_M				<= 0;
			ALU_C_M			<= 0;
			DM_Write_M		<= 0;
			regdst_M			<= 0;
			pc_M				<= 0;
			pc8_M				<= 0;
		end
		else begin
			IR_M				<= IR_E;
			ALU_C_M			<= RALU_C_E;
			DM_Write_M		<= DM_Write_E;
			regdst_M			<= regdst_E;
			pc_M				<= pc_E;
			pc8_M				<= pc8_E;
		end
	end
	


endmodule
