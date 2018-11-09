`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:16:18 12/09/2017 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
    input JType,
    input JorJal,
    input [31:0] JumpAddr,
    input reset,
    input PCSrc,
    input clk,
    output [31:0] instr,
    output [31:0] PCAdd4,
	output [31:0] PCout
    );
	reg[31:0] IM[0:1023], PC;
	assign instr = IM[PC[11:2]];
	assign PCAdd4 = PC + 4;
	assign PCout = PC;
	initial begin
		$readmemh("code.txt",IM);
		PC = 32'h00003000;
	end
	always @(posedge clk) begin
		if(reset == 1)
			PC <= 32'h00003000;
		else begin
			PC <= (PCSrc == 1) ? {{14{IM[PC[11:2]][15]}},IM[PC[11:2]][15:0],2'b0} + PCAdd4 :
					(JType == 0) ? PC + 4:
					(JorJal == 0) ? JumpAddr:
					{PC[31:28], IM[PC[11:2]][25:0], 2'b0};
		end
	end
endmodule
