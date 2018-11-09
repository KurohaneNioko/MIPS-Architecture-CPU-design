`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:55:57 10/22/2017
// Design Name:   Test0000
// Module Name:   F:/Programming Projects/VHDL/TempTest/TestBench.v
// Project Name:  TempTest
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Test0000
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestBench;

	// Inputs
	reg clk;
	reg in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	Test0000 uut (
		.clk(clk), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		in = 0;
		#10;
		in = 1;
		#10;
		in = 0;
		#10;
		in = 1;
	end
	always #3 clk = ~clk;
	
endmodule

