`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:55:15 10/19/2017
// Design Name:   Test2
// Module Name:   F:/Programming Projects/VHDL/Counter/Test2_sim.v
// Project Name:  Counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Test2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test2_sim;

	// Inputs
	reg clk;
	reg [2:0] a;
	reg [2:0] b;

	// Outputs
	wire [3:0] c;

	// Instantiate the Unit Under Test (UUT)
	Test2 uut (
		.clk(clk), 
		.a(a), 
		.b(b), 
		.c(c)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

