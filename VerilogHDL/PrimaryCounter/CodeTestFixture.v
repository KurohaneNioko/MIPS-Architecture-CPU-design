`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:12:45 10/22/2017
// Design Name:   code
// Module Name:   F:/Programming Projects/VHDL/PrimaryCounter/CodeTestFixture.v
// Project Name:  PrimaryCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: code
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CodeTestFixture;

	// Inputs
	reg Clk;
	reg Reset;
	reg Slt;
	reg En;

	// Outputs
	wire [63:0] Output0;
	wire [63:0] Output1;

	// Instantiate the Unit Under Test (UUT)
	code uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.Slt(Slt), 
		.En(En), 
		.Output0(Output0), 
		.Output1(Output1)
	);

	initial begin
		// Initialize Inputs
		Clk = 1;
		Reset = 0;
		Slt = 0;
		En = 1;
	end
      
	always begin
		#3 Clk=~Clk;
		#1 Slt=~Slt;
		#2 Slt=~Slt;
		 
	end	
endmodule

