`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:13:05 10/19/2017
// Design Name:   OneBitAdder
// Module Name:   F:/Programming Projects/VHDL/Adder/OneBit_Test.v
// Project Name:  Adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: OneBitAdder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module OneBit_Test;

	// Inputs
	reg A;
	reg B;
	reg Clk;
	reg En;

	// Outputs
	wire Sum;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	OneBitAdder uut (
		.A(A), 
		.B(B), 
		.Clk(Clk), 
		.En(En), 
		.Sum(Sum), 
		.Overflow(Overflow)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 1;
		Clk = 0;
		En = 1;
	end
	always begin
		#10 Clk<=~Clk;
	end
      
endmodule

