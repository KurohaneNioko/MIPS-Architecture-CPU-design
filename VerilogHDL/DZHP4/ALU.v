`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:35:20 11/28/2017 
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
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUOp,
    output isZero,
    output [31:0] Y
    );
reg [31:0] y;
assign Y=y;
assign isZero=(y==0);
always @* 
	case (ALUOp)
			0:y=A+B;
			1:y=A-B;
			2:y=A&B;
			3:y=A|B;
		//	4:y=A>>B;
		//	5:y=$signed(A)>>>B;
			default:y=32'hxxxxxxxx;
	endcase
endmodule
