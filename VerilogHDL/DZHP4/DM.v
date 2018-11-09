`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:15:10 11/29/2017 
// Design Name: 
// Module Name:    DM 
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
module DM(
	 input [31:0] pc,
    input clk,
    input reset,
	 input WE,
    input [31:0] A,
    input [31:0] WD,
	 input [2:0] DMOp,
    output [31:0] RD
    );
	reg [31:0] RAM [1023:0];
	wire [31:0] memword;
	integer i;
	initial
		for(i=0;i<1024;i=i+1)
			RAM[i]=0;
	assign memword=RAM[A[31:2]];
	assign RD=(DMOp==0)?memword:
				 (DMOp==1)?((A[1:0]==2'b00)?{{24{memword[7]}},memword[7:0]}:
							  (A[1:0]==2'b01)?{{24{memword[15]}},memword[15:8]}:
							  (A[1:0]==2'b10)?{{24{memword[23]}},memword[23:16]}:
							  (A[1:0]==2'b11)?{{24{memword[31]}},memword[31:24]}:0):
				 (DMOp==2)?((A[1:0]==2'b00)?{24'b0,memword[7:0]}:
							  (A[1:0]==2'b01)?{24'b0,memword[15:8]}:
							  (A[1:0]==2'b10)?{24'b0,memword[23:16]}:
							  (A[1:0]==2'b11)?{24'b0,memword[31:24]}:0):
				 0;
	always @(posedge clk)
		if(WE) begin 
			$display("@%h: *%h <= %h",pc, A,WD);
			RAM[A[31:2]]<=WD;
		end

endmodule
