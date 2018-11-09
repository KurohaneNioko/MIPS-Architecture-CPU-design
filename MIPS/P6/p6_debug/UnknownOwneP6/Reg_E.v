`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:19:47 12/09/2017 
// Design Name: 
// Module Name:    Reg_E 
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
//Extop_D,只需要传扩展后的立即数就好了
//还是分布式译码吧，只传Res
module Reg_E(
	input clk,
	input	reset,
	input E_Clr,
	input [31:0] IR_D,
	input [31:0] N_RD1_D,
	input [31:0] N_RD2_D,
	input [1:0] Res_D,	//控制暂停信号
	input	[1:0] regdst_D,	
	input [31:0] Ext_B_D,
	input [31:0] pc_D,
	input [31:0] pc8_D,
	
	output reg [31:0] IR_E,
	output reg [31:0] N_RD1_E,
	output reg [31:0] N_RD2_E,
	//output reg [1:0] Res_E,
	output reg [1:0] regdst_E,	
	output reg [31:0] Ext_B_E,
	output reg [31:0] pc_E,
	output reg [31:0] pc8_E
    );
	 
	always @(posedge clk) begin
		if(reset) begin
			IR_E			<= 0;
			N_RD1_E		<= 0;
			N_RD2_E		<= 0;
			//Res_E			<= 0;
			regdst_E		<= 0;
			Ext_B_E		<= 0;
			pc_E			<= 0;
			pc8_E			<= 0;
		end
		else if(E_Clr) begin
			IR_E			<= 0;
			N_RD1_E		<= 0;
			N_RD2_E		<= 0;
			//Res_E			<= 0;
			regdst_E		<= 0;
			Ext_B_E		<= 0;
			pc_E			<= 0;
			pc8_E			<= 0;
		end
		else begin
			IR_E			<= IR_D;
			N_RD1_E		<= N_RD1_D;
			N_RD2_E		<= N_RD2_D;
			//Res_E			<= Res_D;
			regdst_E		<= regdst_D;
			Ext_B_E		<= Ext_B_D;
			pc_E			<= pc_D;
			pc8_E			<= pc8_D;
		end	
	end


endmodule
