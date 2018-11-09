`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:54:40 12/09/2017 
// Design Name: 
// Module Name:    PC 
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
`include "macro.v"

module PC(
	input clk,
	input reset,
	input PC_En,
	input [1:0] pc_sel,
	input	[31:0] npc_reg,
	input	[31:0] npc,								//暂停机制放在了这里面
	output [31:0] pc8,
	output reg [31:0] pc							//三个信号的选择也放这里面
    );
	
	wire [31:0] pc_input;
	
	assign pc8	=	pc + 8;
	assign pc_input = (pc_sel == `ADD4)		 ? 	pc + 4:
							(pc_sel == `NPC) 		 ? 		npc:
							(pc_sel == `NPC_REG)	 ?		npc_reg:
							pc + 4;
	
	initial begin
		pc = 32'h0000_3000;
	end
	
	always @ (posedge clk) begin
		if(reset)	pc <= 32'h0000_3000;
		else if (PC_En)	;//暂停
		else	pc <= pc_input;	//这里pc+4没有影响
	end


endmodule
