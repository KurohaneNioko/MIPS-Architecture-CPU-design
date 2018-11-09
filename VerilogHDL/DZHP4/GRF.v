`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:29:59 11/28/2017 
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
    input clk,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
	 input [31:0] pc,
    output [31:0] RD1,
    output [31:0] RD2,
    input WE3,
    input reset
    );
	reg [31:0] Reg [31:0];
	assign RD1=(A1==0)?0:Reg[A1];// $0 <= 0
	assign RD2=(A2==0)?0:Reg[A2];
	integer i;
	initial
		for(i=0;i<32;i=i+1)
			Reg[i]=0;
	always @(posedge clk) begin
		if(reset)
			for(i=0;i<32;i=i+1)
				Reg[i]=0;
		else if (WE3) begin
			$display("@%h: $%d <= %h",pc,A3,WD);
			Reg[A3]=WD;
			end
	end

endmodule
