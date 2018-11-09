`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:01:13 10/22/2017
// Design Name:   pipeline
// Module Name:   F:/Programming Projects/VHDL/PrimaryPipeline/PipelineTB.v
// Project Name:  PrimaryPipeline
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pipeline
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PipelineTB;

	// Inputs
	reg [31:0] A1;
	reg [31:0] A2;
	reg [31:0] B1;
	reg [31:0] B2;
	reg clk;

	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	pipeline uut (
		.A1(A1), 
		.A2(A2), 
		.B1(B1), 
		.B2(B2), 
		.clk(clk), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A1 = 0;
		A2 = 0;
		B1 = 0;
		B2 = 0;
		clk = 0;

		// Wait 5 ns for global reset to finish
		#5;
        
		A1 = 0;
		B1 = 1;
		A2 = 2;
		B2 = 3;
		#3;
		clk = 1;
		#2;
		clk = 0;
		#3;
		clk = 1;
		#1;
		clk = 0;
		#1;
		A1 = 3;
		B1 = 1;
		A2 = 2;
		B2 = 0;
		#1;
		#3;
		clk = 1;
		#2;
		clk = 0;
		#3;
		clk = 1;
		#1;
		clk = 0;
		// Add stimulus here
		
	end
		
		
endmodule

