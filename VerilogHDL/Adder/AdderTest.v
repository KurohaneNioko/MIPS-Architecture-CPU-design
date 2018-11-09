`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:00:44 10/19/2017
// Design Name:   Adder
// Module Name:   F:/Programming Projects/VHDL/Adder/AdderTest.v
// Project Name:  Adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module AdderTest;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg Clk;
	reg En;
	wire [3:0] Sum;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	adder uut (
		.A(A), 
		.B(B), 
		.Clk(Clk), 
		.En(En), 
		.Sum(Sum), 
		.Overflow(Overflow)
	);

	initial begin
		// Initialize Inputs
		#0 A = 0;
		#0 B = 0;
		#0 Clk = 0;
		#0 En = 1;
	end
	always begin
			#3 A = A + 1;
		 B = B + 1;
	end
   always begin
		#5 Clk = ~Clk;
	end
endmodule

