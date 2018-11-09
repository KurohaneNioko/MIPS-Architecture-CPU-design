`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:10:46 11/06/2017
// Design Name:   gray
// Module Name:   F:/Programming Projects/VHDL/gray/ahua_tb.v
// Project Name:  gray
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: gray
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ahua_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg En;

	// Outputs
	wire [2:0] Output;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	gray uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.En(En), 
		.Output(Output), 
		.Overflow(Overflow)
	);

initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 0;
		En = 1;

		// Wait 1 ns for global reset to finish
		#1;
        
		// Add stimulus here
		
		
		
	end
      always #3 Clk=~Clk;
endmodule
