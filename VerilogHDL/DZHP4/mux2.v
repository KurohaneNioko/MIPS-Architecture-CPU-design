`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:31:16 12/03/2017 
// Design Name: 
// Module Name:    mux
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
module mux2 #(parameter WIDTH=32)(
		input [WIDTH-1:0] d0,d1,
		input sel,
		output [WIDTH-1:0] y
    );
	 assign y=sel?d1:d0;


endmodule

module mux4 #(parameter WIDTH=32)(
		input [WIDTH-1:0] d0,d1,d2,d3,
		input [1:0] sel,
		output [WIDTH-1:0] y
    );
	 assign y=sel[1]?(sel[0]?d3:d2):
							(sel[0]?d1:d0);
 


endmodule