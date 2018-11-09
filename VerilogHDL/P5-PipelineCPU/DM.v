`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:51:04 12/19/2017 
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
    input clk,
    input reset,
    input WE,
    input [2:0] Load,
    input [31:0] AO_M,
    input [31:0] WDM_M,
    input [31:0] PC_M,
    output [31:0] DMout_M
    );
	reg[31:0] DM[0:1023];
	wire[31:0] prewrite;
	//`define WORD 			3'b000
	//`define SIGNED_HALF 	3'b001
	//`define SH		 	3'b001
	//`define UNSIGNED_HALF 3'b010
	//`define SB		 	3'b010
	//`define SIGNED_BYTE 	3'b011
	//`define UNSIGNED_BYTE 3'b100
	integer i;
	assign DMout_M
			  = (Load == 3'b000)?DM[AO_M[11:2]]:
				(Load == 3'b001 && AO_M[1] == 0)?{{16{DM[AO_M[11:2]][15]}},DM[AO_M[11:2]][15:0]}:
				(Load == 3'b001 && AO_M[1] == 1)?{{16{DM[AO_M[11:2]][31]}},DM[AO_M[11:2]][31:16]}:
				(Load == 3'b010 && AO_M[1] == 0)?{16'h0000,DM[AO_M[11:2]][15:0]}:
				(Load == 3'b010 && AO_M[1] == 1)?{16'h0000,DM[AO_M[11:2]][31:16]}:
				(Load == 3'b011 && AO_M[1:0] == 0)?{{24{DM[AO_M[11:2]][7]}},DM[AO_M[11:2]][7:0]}:
				(Load == 3'b011 && AO_M[1:0] == 1)?{{24{DM[AO_M[11:2]][15]}},DM[AO_M[11:2]][15:8]}:
				(Load == 3'b011 && AO_M[1:0] == 2)?{{24{DM[AO_M[11:2]][23]}},DM[AO_M[11:2]][23:16]}:
				(Load == 3'b011 && AO_M[1:0] == 3)?{{24{DM[AO_M[11:2]][31]}},DM[AO_M[11:2]][31:24]}:
				(Load == 3'b100 && AO_M[1:0] == 0)?{24'h000000,DM[AO_M[11:2]][7:0]}:
				(Load == 3'b100 && AO_M[1:0] == 1)?{24'h000000,DM[AO_M[11:2]][15:8]}:
				(Load == 3'b100 && AO_M[1:0] == 2)?{24'h000000,DM[AO_M[11:2]][23:16]}:
				(Load == 3'b100 && AO_M[1:0] == 3)?{24'h000000,DM[AO_M[11:2]][31:24]}:0;
	assign prewrite = (Load == 3'b000)?WDM_M:
					  (Load == 3'b001 && AO_M[1] == 0)?{DM[AO_M[11:2]][31:16],WDM_M[15:0]}:
					  (Load == 3'b001 && AO_M[1] == 1)?{WDM_M[15:0],DM[AO_M[11:2]][15:0]}:
					  (Load == 3'b010 && AO_M[1:0] == 0)?{DM[AO_M[11:2]][31:8],WDM_M[7:0]}:
					  (Load == 3'b010 && AO_M[1:0] == 1)?{DM[AO_M[11:2]][31:16],WDM_M[7:0],DM[AO_M[11:2]][7:0]}:
					  (Load == 3'b010 && AO_M[1:0] == 2)?{DM[AO_M[11:2]][31:24],WDM_M[7:0],DM[AO_M[11:2]][15:0]}:
					  (Load == 3'b010 && AO_M[1:0] == 3)?{WDM_M[7:0],DM[AO_M[11:2]][23:0]}:0;
	initial begin
		for(i=0;i<1024;i=i+1) begin
			DM[i] <= 32'b0;
		end
	end
	always @(posedge clk) begin
		if(reset == 1) begin
			for(i=0;i<1024;i=i+1) begin
				DM[i] <= 32'b0;
			end
		end	
		else if(reset == 0 && WE == 1) begin
			DM[AO_M[11:2]] <= prewrite;
			$display("%d@%h: *%h <= %h",$time,PC_M,{AO_M[31:2],2'b00},prewrite);
		end
	end

endmodule
