`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:06:32 12/11/2017 
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
`include "macro.v"
//DM“—¿©≥‰÷¡4096
module DM(
	input clk,
	input reset,
	input MemWrite_M,
	input [3:0] DM_sel_M,
	input [31:0] pc_M,
	input [31:0] IR_M,
	input [31:0] ALU_C_M,
	input [31:0] N_DM_Write_M,
	output [31:0] DM_out_M
    );
	
	reg [31:0] DM_Data [0:4095];
	
	wire [11:0] ADDR;
	wire [31:0] out_ADDR;
	wire [1:0] low_addr;
	wire [31:0] temp;
	wire [31:0] sb0, sb1, sb2, sb3;
	wire [31:0] lb0, lb1, lb2, lb3;
	wire [31:0] lbu0, lbu1, lbu2, lbu3;
	wire [31:0] sh0, sh1;
	wire [31:0] lh0, lh1;
	wire [31:0] lhu0, lhu1;
	wire [31:0] sb_data, sh_data, sw_data;
	wire [31:0] write_data;
	wire [31:0] lb_data, lbu_data, lh_data, lhu_data, lw_data;
	
	integer i;
	assign ADDR = ALU_C_M [13:2];
	
	assign low_addr = ALU_C_M[1:0];
	
	assign temp = DM_Data[ADDR];
	
	assign 	sb0 = {temp[31:8], N_DM_Write_M[7:0]},
				sb1 = {temp[31:16], N_DM_Write_M[7:0], temp[7:0]},
				sb2 = {temp[31:24], N_DM_Write_M[7:0], temp[15:0]},
				sb3 = {N_DM_Write_M[7:0], temp[23:0]};
	
	assign	sh0 = {temp[31:16], N_DM_Write_M[15:0]},
				sh1 = {N_DM_Write_M[15:0], temp[15:0]};
	
	assign	sb_data	=	(low_addr	==	2'b00)	?	sb0	:
								(low_addr	==	2'b01)	?	sb1	:
								(low_addr	==	2'b10)	?	sb2	:
																	sb3	;
	
	assign	sh_data	=	(low_addr[1]	==	1'b0)	?	sh0	:	sh1;
	assign	sw_data	=	N_DM_Write_M;
	
	assign	lb0 = {{24{temp[7]}}, temp[7:0]},
				lb1 = {{24{temp[15]}}, temp[15:8]},
				lb2 = {{24{temp[23]}}, temp[23:16]},
				lb3 = {{24{temp[31]}}, temp[31:24]};
	
	assign	lbu0 = {{24'h0000_0000_0000}, temp[7:0]},
				lbu1 = {{24'h0000_0000_0000}, temp[15:8]},
				lbu2 = {{24'h0000_0000_0000}, temp[23:16]},
				lbu3 = {{24'h0000_0000_0000}, temp[31:24]};
	
	assign	lh0 = {{16{temp[15]}}, temp[15:0]},
				lh1 = {{16{temp[31]}}, temp[31:16]};
	
	assign 	lhu0 = {{16'h0000_0000}, temp[15:0]},
				lhu1 = {{16'h0000_0000}, temp[31:16]};
	
	assign	lb_data 	= 	(low_addr	==	2'b00)	?	lb0	:
								(low_addr	==	2'b01)	?	lb1	:
								(low_addr	==	2'b10)	?	lb2	:
																	lb3	;
	
	assign	lbu_data	= 	(low_addr	==	2'b00)	?	lbu0	:
								(low_addr	==	2'b01)	?	lbu1	:
								(low_addr	==	2'b10)	?	lbu2	:
																	lbu3	;
	
	assign	lh_data	=	(low_addr[1]	==	1'b0)	?	lh0	:	lh1;
	assign	lhu_data	=	(low_addr[1]	==	1'b0)	?	lhu0	:	lhu1;
	assign	lw_data	=	DM_Data[ADDR];
	
	assign	write_data	=	(DM_sel_M == `sel_sb)	?	sb_data	:
									(DM_sel_M == `sel_sh)	?	sh_data	:
									(DM_sel_M == `sel_sw)	?	sw_data	:	32'hffff_ffff;
	
	assign	DM_out_M	=	(DM_sel_M == `sel_lb)	?	lb_data	:
								(DM_sel_M == `sel_lbu)	?	lbu_data	:
								(DM_sel_M == `sel_lh)	?	lh_data	:
								(DM_sel_M == `sel_lhu)	?	lhu_data	:
								(DM_sel_M == `sel_lw)	?	lw_data	:	32'hffff_ffff;
	
	assign	out_ADDR	=	{{ALU_C_M[31:2]}, {2'b00}};
	
	initial begin
		for(i = 0;i < 4096;i = i + 1) DM_Data[i] = 0;
	end
	
	
	always @(posedge clk) begin
		if(reset) begin
			for(i = 0;i < 4096;i = i + 1) DM_Data[i] <= 0;
		end
		else if(MemWrite_M) begin
			$display("%d@%h: *%h <= %h", $time, pc_M, out_ADDR,write_data);
			DM_Data[ADDR] <= write_data;
		end
	end


endmodule
