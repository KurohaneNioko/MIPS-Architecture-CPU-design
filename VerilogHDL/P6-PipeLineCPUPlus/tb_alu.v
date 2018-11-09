`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:03:42 12/28/2017
// Design Name:   ALU
// Module Name:   F:/ProgrammingProjects/VerilogHDL/P6-PipeLineCPUPlus/tb_alu.v
// Project Name:  P6-PipeLineCPUPlus
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_alu;

	// Inputs
	reg [31:0] SrcA_E;
	reg [31:0] SrcB_E;
	reg [4:0] Shift_E;
	reg [3:0] ALUCtrl;

	// Outputs
	wire [31:0] AO_E;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.SrcA_E(SrcA_E), 
		.SrcB_E(SrcB_E), 
		.Shift_E(Shift_E), 
		.ALUCtrl(ALUCtrl), 
		.AO_E(AO_E)
	);

	initial begin
		// Initialize Inputs
		SrcA_E = 0;
		SrcB_E = 32'hfab6e829;
		Shift_E = 13;
		ALUCtrl = 10;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

