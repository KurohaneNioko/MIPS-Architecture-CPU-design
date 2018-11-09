`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:03:18 12/19/2017 
// Design Name: 
// Module Name:    RF 
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
module RF(
    input clk,
    input reset,
    input [4:0] A1rs,
    input [4:0] A2rt,
    input [4:0] A3,
    input RegWE,
    input [31:0] WPC,
    input [31:0] RWD,
    output [31:0] V1_D,
    output [31:0] V2_D
    );
	reg[31:0] register[0:31];
	integer i;
	assign V1_D = A1rs == 0 ? 0 : register[A1rs];
	assign V2_D = A2rt == 0 ? 0 : register[A2rt];
	initial begin
		for(i = 0; i<32; i=i+1)
			register[i] <= 32'b0;
	end
	always @(posedge clk) begin 
		if (reset == 1) begin
			for(i = 0; i<32; i=i+1)
				register[i] <= 32'b0;
		end
		else if(reset == 0 && RegWE == 1) begin
			register[A3] <= RWD;
			$display("%d@%h: $%d <= %h",$time, WPC,A3,RWD);
		end
	end
endmodule
