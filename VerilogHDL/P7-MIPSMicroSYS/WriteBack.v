`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:07:43 12/19/2017 
// Design Name: 
// Module Name:    WriteBack 
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
module WriteBack(
    input clk,
    input reset,
    input [31:0] DMout_M,
    input [31:0] AO_M,
    input [31:0] PC_M,
	input [31:0] PCAdd8_M,
	input [31:0] CP0RD_M,
    output [31:0] DMout_W,
    output [31:0] AO_W,
    output [31:0] PC_W,
	output [31:0] PCAdd8_W,
	output [31:0] CP0RD_W
    );
	reg[31:0] dmout, ao, pc, pcadd8, cp0rd;
	assign DMout_W = dmout;
	assign AO_W = ao;
	assign PC_W = pc;
	assign PCAdd8_W = pcadd8;
	assign CP0RD_W = cp0rd;
	initial begin
		dmout <= 0;
		ao <= 0;
		pc <= 0;
		pcadd8 <= 0;
		cp0rd <= 0;
	end
	always @(posedge clk) begin
		if(reset) begin
			dmout <= 0;
			ao <= 0;
			pcadd8 <= 0;
			cp0rd <= 0;
		end
		else if(reset == 0) begin
			dmout <= DMout_M;
			ao <= AO_M;
			pc <= PC_M;
			pcadd8 <= PCAdd8_M;
			cp0rd <= CP0RD_M;
		end
	end


endmodule
