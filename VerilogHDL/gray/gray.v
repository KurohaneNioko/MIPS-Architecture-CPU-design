`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:46 11/05/2017 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output Overflow
    );
	reg[31:0] counter;
	reg tmp;
	wire[28:0] comb;
	assign {comb[28:0],Output[2:0]} = (counter%8)/2 ^ (counter%8);
	assign Overflow = tmp;
	initial begin
		counter = 0;
		tmp = 0;
	end
	always @(posedge Clk) begin
		counter = (Reset == 1) ? 0 : 
				  (En == 1) ? counter + 1 : counter;
		tmp <= (Reset == 1) ? 0 :
			   (counter >7 ) ? 1 : 0;
	end
endmodule
