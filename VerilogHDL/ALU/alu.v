`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:02:44 11/05/2017 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUOp,
    output [31:0] C
    );
	wire signed [31:0] sgntmp;
	reg [31:0] tmp;
	assign C = tmp;
	assign sgntmp = A;
	always @* begin
		case (ALUOp)
			3'b000 : begin
						tmp = A + B;
					 end
			3'b001 : begin
						tmp = A - B;
					 end
			3'b010 : begin
						tmp = A & B;
					 end
			3'b011 : begin
						tmp = A | B;
					 end
			3'b100 : begin
						tmp = A >> B;
					 end
			3'b101 : begin
						tmp = sgntmp >>> B;
					 end
		endcase
	end
endmodule
