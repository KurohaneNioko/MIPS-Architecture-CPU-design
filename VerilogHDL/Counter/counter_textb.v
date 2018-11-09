`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:07:33 10/19/2017
// Design Name:   counter
// Module Name:   F:/Programming Projects/VHDL/Counter/counter_textb.v
// Project Name:  Counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter_textb;

	// Inputs
	reg clk;
	reg rst_n;

	// Outputs
	wire [3:0] cnt;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.cnt(cnt)
	);

	initial begin
		// Initialize Inputs
		#0 clk = 0;
		   rst_n = 0;
		#5 rst_n = 1 'b1 ;
		// Wait 100 ns for global reset to finish
		end
      always #1 clk=~clk;
endmodule

