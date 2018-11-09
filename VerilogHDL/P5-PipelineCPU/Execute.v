`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:08:04 12/19/2017 
// Design Name: 
// Module Name:    Execute 
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
module Execute(
    input [31:0] PC_D,
    input [31:0] V1_D,
    input [31:0] V2_D,
    input [31:0] ExtImm_D,
    input [4:0] Shift_D,
    input [31:0] PCAdd8_D,
    input clk,
    input reset,
    output [31:0] PC_E,
    output [31:0] V1_E,
    output [31:0] V2_E,
    output [31:0] ExtImm_E,
    output [4:0] Shift_E,
	output [31:0] PCAdd8_E
    );
	reg[31:0] pc, v1, v2, extimm, shift, pcadd8;
	assign PC_E = pc;
	assign V1_E = v1;
	assign V2_E = v2;
	assign ExtImm_E = extimm;
	assign Shift_E = shift;
	assign PCAdd8_E = pcadd8;
	initial begin
		pc <= 0;
		v1 <= 0;
		v2 <= 0;
		extimm <= 0;
		shift <= 0;
		pcadd8 <= 0;
	end
	always @(posedge clk) begin
		if(reset) begin
			pc <= 0;
			v1 <= 0;
			v2 <= 0;
			extimm <= 0;
			shift <= 0;
			pcadd8 <= 0;
		end
		else if (reset == 0) begin
			pc <= PC_D;
			v1 <= V1_D;
			v2 <= V2_D;
			extimm <= ExtImm_D;
			shift <= Shift_D;
			pcadd8 <= PCAdd8_D;
		end
	end


endmodule
