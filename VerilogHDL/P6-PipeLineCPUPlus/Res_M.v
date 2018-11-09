`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:29:47 12/20/2017 
// Design Name: 
// Module Name:    Res_M 
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
module ResM(
    input [2:0] Res_E,
    input [4:0] A3_E,
	input [4:0] rt_E,
    input clk,
    input reset,
    output [2:0] Res_M,
    output [4:0] A3_M,
	output [4:0] rt_M
    );
	reg [2:0] res;
	reg [4:0] a3, rt;
	assign Res_M = res;
	assign A3_M = a3;
	assign rt_M = rt;
	initial begin
		res <= 0;
		a3 <= 0;
		rt <= 0;
	end
	always @(posedge clk) begin
		if(reset) begin
			res <= 0;
			a3 <= 0;
			rt <= 0;
		end
		else if(reset == 0) begin
			res <= Res_E;
			a3 <= A3_E;
			rt <= rt_E;
		end
	end

endmodule
