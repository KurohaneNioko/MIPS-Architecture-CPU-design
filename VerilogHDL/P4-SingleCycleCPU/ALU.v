`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:21:50 12/10/2017 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] SrcA,
    input [31:0] SrcB,
    input [4:0] Shift,
    input [3:0] ALUCtrl,
    output bigger,
    output equal,
    output smaller,
    output [31:0] ALUResult
    );
	reg[31:0] r;
	wire signed [31:0] sgnA, sgnB;
	assign bigger = $signed(r) > 0 ? 1 : 0;
	assign equal = $signed(r) == 0 ? 1 : 0;
	assign smaller = $signed(r) < 0 ? 1 : 0;
	assign sgnA = SrcA;
	assign sgnB = SrcB;
	assign ALUResult = r;
	always @* begin
		case(ALUCtrl)
		0: begin
              r <= SrcA + SrcB;
           end
		1: begin
              r <= SrcA - SrcB;
           end
		2: begin
              r <= SrcA | SrcB;
           end
		3: begin
              r <= SrcA & SrcB;
           end
		4: begin
              r <= ~(SrcA | SrcB);
           end
		5: begin
              r <= SrcA ^ SrcB;
           end
		6: begin
              r <= sgnA < sgnB;
           end
		7: begin
              r <= SrcA < SrcB;
           end
		8: begin
              r <= SrcB << Shift;
           end
		9: begin
              r <= SrcB << SrcA[4:0];
           end
		10: begin
              r <= sgnB >>> Shift;
           end
		11: begin
              r <= sgnB >>> SrcA[4:0];
           end
		12: begin
              r <= SrcB >> Shift;
           end
		13: begin
              r <= SrcB >> SrcA[4:0];
           end
		default: begin
              r <= SrcA + SrcB;
                 end
		endcase
	end

endmodule
