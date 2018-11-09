`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:30:13 12/28/2017
// Design Name:   ALU
// Module Name:   F:/ProgrammingProjects/VerilogHDL/P4-SingleCycleCPU/tb_alu.v
// Project Name:  P4-SingleCycleCPU
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
	reg [31:0] SrcA;
	reg [31:0] SrcB;
	reg [4:0] Shift;
	reg [3:0] ALUCtrl;

	// Outputs
	wire bigger;
	wire equal;
	wire smaller;
	wire [31:0] ALUResult;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.SrcA(SrcA), 
		.SrcB(SrcB), 
		.Shift(Shift), 
		.ALUCtrl(ALUCtrl), 
		.bigger(bigger), 
		.equal(equal), 
		.smaller(smaller), 
		.ALUResult(ALUResult)
	);

	initial begin
		// Initialize Inputs
		SrcA = 0;
		SrcB = 32'h86347bac;
		Shift = 22;
		ALUCtrl = 10;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

