`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:51:02 12/09/2017 
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
module GRF(
    input [25:21] A1rsBase,
    input [20:16] A2rt,
    input [15:11] rd,
    input [31:0] WriteData,
    input clk,
    input reset,
    input WE,
    input [1:0] RegdstA3,
	input [31:0] PC,
    output [31:0] RD1,
    output [31:0] RD2
    );
	reg[31:0] register[31:0];
	wire[4:0] RegAddr;
	integer i;
	assign RegAddr = (RegdstA3 == 0) ? A2rt :
						(RegdstA3 == 1) ? rd:
						(RegdstA3 == 2) ? 31: 0;
	assign RD1 = A1rsBase == 0 ? 0 : register[A1rsBase];
	assign RD2 = A2rt == 0 ? 0 : register[A2rt];
	initial begin
		for(i = 0; i<32; i=i+1)
			register[i] <= 32'b0;
	end
	always @(posedge clk) begin 
		if (reset == 1) begin
			for(i = 0; i<32; i=i+1)
				register[i] <= 32'b0;
		end
		else if(reset == 0 && WE == 1) begin
			register[RegAddr] <= WriteData;
			$display("@%h: $%d <= %h", PC,RegAddr,WriteData);
		end
	end

endmodule
