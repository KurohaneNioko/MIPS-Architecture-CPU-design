`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:38:21 12/10/2017 
// Design Name: 
// Module Name:    GRF 
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
`include "macro.v"

module GRF(
	input clk,
	input reset,
	input [31:0] IR_D,
	input [31:0] IR_W,
	input [31:0] pc_W,
	input regwrite_W,
	input [31:0] reg_writedata_W,	//写入数据
	input [1:0] regdst_W,			//写到哪儿
	output [31:0] GRF_out_RD1,
	output [31:0] GRF_out_RD2 
    );
	reg [31:0] register [0:31];
	wire [4:0] rt_W, rd_W, location;
	wire [4:0] rs_D, rt_D;
	integer i;
	
	initial begin
		for(i = 0;i < 32;i = i + 1)
			register[i] = 0;
	end
	
	assign	rt_W = IR_W[20:16],
				rd_W = IR_W[15:11];
	assign	rs_D = IR_D[25:21],
				rt_D = IR_D[20:16];
	assign	GRF_out_RD1 = register[rs_D],	
				GRF_out_RD2 = register[rt_D];
				
	assign	location =	(regdst_W == `write_rt)	?	rt_W:
								(regdst_W == `write_rd)	?	rd_W:
								(regdst_W == `write_31)	?	5'b11111:
								5'bxxxxx;
	//写地址应该是W级的IR_W传来的
	always @(posedge clk) begin
		if(reset) begin
			for(i = 0;i < 32;i = i + 1)
				register[i] <= 0;
		end
		else if(regwrite_W) begin
			if(location != 5'b00000) begin
				register[location] <= reg_writedata_W;
				$display("%d@%h: $%d <= %h", $time, pc_W, location,reg_writedata_W); 
			end
		end
	end

endmodule
