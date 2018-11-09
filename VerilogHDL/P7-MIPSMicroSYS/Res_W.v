`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:32:49 12/20/2017 
// Design Name: 
// Module Name:    ResW 
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
module ResW(
    input [2:0] Res_M,
    input [4:0] A3_M,
    input clk,
    input reset,
    output [2:0] Res_W,
    output [4:0] A3_W
    );
	reg [2:0] res;
	reg [4:0] a3;
	assign Res_W = res;
	assign A3_W = a3;
	initial begin
		res <= 0;
		a3 <= 0;
	end
	always @(posedge clk) begin
		if(reset) begin
			res <= 0;
			a3 <= 0;
		end
		else if(reset == 0) begin
			res <= Res_M;
			a3 <= A3_M;
		end
	end
endmodule
