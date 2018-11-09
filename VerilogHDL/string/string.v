`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:48:28 11/08/2017 
// Design Name: 
// Module Name:    string 
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
module string(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
	parameter S0 = 0;
	parameter S1 = 1;
	parameter S2 = 2;
	parameter S3 = 3;
	parameter Sdead = 4;
	reg[2:0] NextState;
	reg tmp;
	initial begin
		NextState = 0;
		tmp = 0;
	end
	assign out = tmp;
	always @(posedge clr) begin
		NextState <= 0;
		tmp <= 0;
	end
	always @(posedge clk) begin
		if(!clr) begin
			case (NextState)
			S0 : begin
					NextState <= (in < 58 && in > 47)? S1:Sdead ;
					tmp <= (in < 58 && in > 47)? 1 : 0;
				 end
			S1 : begin
					NextState <= (in == 42 || in == 43)? S2:Sdead ;
					tmp <= 0;
				 end
			S2 : begin
					NextState <= (in < 58 && in > 47)? S3:Sdead ;
					tmp <= (in < 58 && in > 47)? 1:0 ;
				 end
			S3 : begin
					NextState <= (in == 42 || in == 43)? S2:Sdead ;
					tmp <= 0;
				 end
		 Sdead : begin
					tmp <= 0;
				 end
			endcase
		end
	end
	
endmodule
