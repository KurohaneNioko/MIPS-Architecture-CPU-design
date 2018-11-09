`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:57:40 10/13/2016 
// Design Name: 
// Module Name:    comparator 
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
module comparator(
    input [3:0] A,
    input [3:0] B,
    output reg Out
    );
	
	initial begin
	Out = 0;  
	end
	always @* begin
		if(A[3]&&~B[3])
			Out=1;
		else if(A[3]==B[3] && A[2]&&~B[2])
			Out=1;
		else if(A[3]==B[3] && A[2]==B[2] && A[1]&&~B[1])
			Out=1;
		else if(A[3]==B[3] && A[2]==B[2] && A[2]==B[2] && A[0]&&~B[0])
			Out=1;
		else
		Out =0;
	end
endmodule
