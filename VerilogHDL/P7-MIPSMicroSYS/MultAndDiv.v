`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:26:28 12/27/2017 
// Design Name: 
// Module Name:    MultAndDiv 
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
`include "InstrDefine.v"
module MultAndDiv(
    input clk,
    input reset,
    input [31:0] D1,
    input [31:0] D2,
    input [3:0] MDCtrl,
	input [31:0] Instr_M,
	input goback,
    output Busy,
    output [31:0] HI,
    output [31:0] LO
    );
	reg [31:0] hi, lo, d1, d2, oldhi, oldlo;
	reg [3:0] busy, mdctrl;
	reg start;
	//wire signed [31:0] sgnD1, sgnD2;
	wire[31:0] instr;
	assign HI = hi;
	assign LO = lo;
	assign Busy = (|busy)|start;
	assign instr = Instr_M;
	`define MULT  0
	`define DIV   1
	`define MULTU 2
	`define DIVU  3
	`define MTHI  4
	`define MTLO  5
	initial begin
		hi <= 0;
		lo <= 0;
		start <= 0;
		busy <= 0;
		d1 <= 0;
		d2 <= 0;
		mdctrl <= 15;
		oldhi <= 0;
		oldlo <= 0;
	end
	always @(negedge clk) begin
		if (start == 0 && busy == 0 && (MDCtrl <= 3)) begin
			start <= 1;
			d1 <= D1;
			d2 <= D2;
			mdctrl <= MDCtrl;
		end
		if (start == 0 && busy == 0 && (MDCtrl == 4 || MDCtrl == 5)) begin
			{hi, lo} <= (MDCtrl == `MTHI) ? {D1, lo}:
						(MDCtrl == `MTLO) ? {hi, D1}:{hi, lo};
			{oldhi, oldlo} <= {hi, lo};
		end
		if(busy == 1) begin
			busy <= 0;
			{hi, lo} <= (mdctrl == `MULT )? {{32{d1[31]}},d1} * {{32{d2[31]}},d2}:
						(mdctrl == `DIV  )? ((d2!=0)?{$signed(d1) % $signed(d2), 
											 $signed(d1) / $signed(d2)}:64'b0):
						(mdctrl == `MULTU)? d1 * d2:
						(mdctrl == `DIVU) ? ((d2!=0)?{$unsigned(d1) % $unsigned(d2), 
											 $unsigned(d1) / $unsigned(d2)}:64'b0):{hi, lo};
			mdctrl <= MDCtrl;
		end
	end
	always @(posedge clk) begin
		if (reset) begin
			hi <= 0;
			lo <= 0;
			d1 <= 0;
			d2 <= 0;
			mdctrl <= 15;
		end
		if (reset == 0) begin
			
			if(~goback) begin
			if(start == 1 && busy == 0) begin
				start <= 0;
				busy <= ((mdctrl == `MULT ) | (mdctrl == `MULTU))?5:
						((mdctrl == `DIV  ) | (mdctrl == `DIVU ))?10:0;
			end
			if(busy > 1) begin
				busy <= busy - 1;
			end	
			end
			
			if(goback) begin
				if(`mthi | `mtlo) begin
					{hi, lo} <= {oldhi, oldlo};
					start <= 0;
					busy <= 0;
					d1 <= 0;
					d2 <= 0;
				end
				else begin
					start <= 0;
					busy <= 0;
					d1 <= 0;
					d2 <= 0;
					mdctrl <= 15;
				end
			end
		end
		
	end
endmodule
