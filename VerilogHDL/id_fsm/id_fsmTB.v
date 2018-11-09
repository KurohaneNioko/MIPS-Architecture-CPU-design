`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:37:19 10/22/2017
// Design Name:   id_fsm
// Module Name:   F:/Programming Projects/VHDL/id_fsm/id_fsmTB.v
// Project Name:  id_fsm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: id_fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module id_fsmTB;

	// Inputs
	reg [7:0] char;
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	id_fsm uut (
		.char(char), 
		.clk(clk), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		char = "a";
		clk = 0;
		#3 char = "b";
		#10 char = "c";
		#10 char = "0";
		#10 char = "1";
		#10 char = "2";
		#10 char = "%";
		#10 char = "f";
		#10 char = "[";
		#10 char = "%";
		#10 char = "%";
		#10 char = "f";
		#10 char = "g";
		#10 char = "o";
		#10 char = "2";
		#10 char = "3";
		#10 char = "3";
		#10 char = ".";
		
	end
   always #5 clk=~clk;
endmodule

