`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:35:22 12/10/2017 
// Design Name: 
// Module Name:    Extender 
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
`include "macro.v"

module Extender(
	input [15:0] Ext_A_D,
	input	[2:0]	Extop,
	output [31:0] Ext_B_D
    );
	wire [31:0] zero_Ext_B_D,
					low_zero_Ext_B_D, 
					sign_Ext_B_D;
	assign zero_Ext_B_D 		= {{16'h0000},Ext_A_D};
	assign low_zero_Ext_B_D	= {Ext_A_D,{16'h0000}};
	assign sign_Ext_B_D		= {{16{Ext_A_D[15]}},Ext_A_D};
	
	assign Ext_B_D	=	(Extop == `zero_ext)		   ?	zero_Ext_B_D		:
							(Extop == `low_zero_ext)	?	low_zero_Ext_B_D	:
							(Extop == `sign_ext)			?	sign_Ext_B_D		:
							32'hxxxx_xxxx;
	


endmodule
