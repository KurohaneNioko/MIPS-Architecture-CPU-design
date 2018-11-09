`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:24:42 12/20/2017 
// Design Name: 
// Module Name:    ResE 
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
module ResE(
    input [4:0] rs_D,
    input [4:0] rt_D,
	input [4:0] rd_D,
    input [2:0] Res_D,
    input clk,
    input reset,
    output [4:0] rs_E,
    output [4:0] rt_E,
	output [4:0] rd_E,
    output [2:0] Res_E
    );
	reg [2:0] res;
	reg [4:0] rs, rt, rd;
	assign Res_E = res;
	assign rs_E = rs;
	assign rt_E = rt;
	assign rd_E = rd;
	initial begin
		res <= 0;
		rs <= 0;
		rt <= 0;
		rd <= 0;
	end
	always @(posedge clk) begin
		if(reset) begin
			res <= 0;
			rs <= 0;
			rt <= 0;
			rd <= 0;
		end
		else if(reset == 0) begin
			res <= Res_D;
			rs <= rs_D;
			rt <= rt_D;
			rd <= rd_D;
		end
	end

endmodule
