`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:45:21 11/28/2017 
// Design Name: 
// Module Name:    pc 
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
module PC(
    output [31:0] pc,
    input clk,
    input reset,
    input  [31:0] n_pc
    );
	 reg [31:0] Pc;
	 assign pc=Pc;
	initial 
		Pc=32'h00003000;
	always @(posedge clk) begin
	if(reset)
		Pc=32'h00003000;
	else 
		Pc=n_pc;
	end

endmodule
