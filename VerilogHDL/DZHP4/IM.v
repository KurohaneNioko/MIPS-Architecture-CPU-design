`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:52:01 11/28/2017 
// Design Name: 
// Module Name:    IM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module IM(
    input [31:0] A,
    output [31:0] RD
    );

   reg [31:0] RAM [1023:0];
   initial
      $readmemh ("code.txt",RAM);
	assign RD=RAM[A[31:2]-32'h00000c00];			

endmodule
