`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:36:50 01/02/2018 
// Design Name: 
// Module Name:    Bridge 
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
module Bridge(
    input [31:0] PrAddr,
    //input [31:0] PrWD,
	input Dev0Int,
	input Dev1Int,
	input DevWE,        //connected with MemWE
    input [31:0] Dev0RD,    //TC0
    input [31:0] Dev1RD,    //TC1
	output WEDev0,
	output WEDev1,
	output [31:0] PrRD,
    output [15:10] HWInt
    );  //TC0 0x00007F00th-0x00007F0Bth, TC1 0x00007F10th-0x00007F1Bth
    wire HitDev, HitDev0, HitDev1;
    assign HitDev = HitDev0 | HitDev1;
	assign HitDev0 = (PrAddr >= 32'h0000_7F00) && (PrAddr <= 32'h0000_7F0B);
    assign HitDev1 = (PrAddr >= 32'h0000_7F10) && (PrAddr <= 32'h0000_7F1B);
    assign WEDev0 = DevWE & HitDev0;
    assign WEDev1 = DevWE & HitDev1;
    assign PrRD = (HitDev0) ? Dev0RD:
                  (HitDev1) ? Dev1RD:0;
	assign HWInt = {4'b0, Dev1Int, Dev0Int};
endmodule
