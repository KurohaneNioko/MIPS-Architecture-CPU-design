`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:20:24 12/09/2017 
// Design Name: 
// Module Name:    Reg_W 
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
module Reg_W(
	input clk,
	input reset,
	input RegWrite_M,
	input [1:0] Res_M,
	input [1:0] Mem2Reg_M,
	input [1:0] regdst_M,
	input [31:0] IR_M,
	input [31:0] pc_M,
	input [31:0] pc8_M,
	input [31:0] DM_out_M,
	input [31:0] ALU_C_M,
	output reg RegWrite_W,
	output reg [1:0] Res_W,
	output reg [1:0] Mem2Reg_W,
	output reg [1:0] regdst_W,
	output reg [31:0] IR_W,
	output reg [31:0] pc_W,
	output reg [31:0] pc8_W,
	output reg [31:0] DM_out_W,
	output reg [31:0] ALU_C_W
    );
	
	always @(posedge clk) begin
		if(reset) begin
			RegWrite_W		<= 0;
			Res_W				<= 0;
			Mem2Reg_W		<= 0;
			regdst_W			<= 0;
			IR_W				<= 0;
			pc_W				<= 0;
			pc8_W				<= 0;
			DM_out_W			<= 0;
			ALU_C_W			<= 0;
		end
		else begin
			RegWrite_W		<= RegWrite_M;
			Res_W				<= Res_M;
			Mem2Reg_W		<= Mem2Reg_M;
			regdst_W			<= regdst_M;
			IR_W				<= IR_M;
			pc_W				<=	pc_M;
			pc8_W				<= pc8_M;
			DM_out_W			<= DM_out_M;
			ALU_C_W			<= ALU_C_M;
		end
	end

endmodule
