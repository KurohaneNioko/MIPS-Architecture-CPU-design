`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:54:03 10/13/2016 
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
    input [3:0] A,
    input [3:0] B,
    input [1:0] ALUOp,
    output reg [3:0] C
    );
	 always @* begin
	 if (ALUOp==2'b00)
		C=A+B;
	 if (ALUOp==2'b01)
		C=A-B;
	 if (ALUOp==2'b10)
		C=(A&B);
	 if (ALUOp==2'b11)
		C=(A|B);
	 end

endmodule
