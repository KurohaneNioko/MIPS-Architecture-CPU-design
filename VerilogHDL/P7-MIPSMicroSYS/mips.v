`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:58:50 12/19/2017 
// Design Name: 
// Module Name:    mips 
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
`include "InstrDefine.v"
module mips(
    input clk,
    input reset
	);
	wire [31:0] praddr, prwd, prrd, tc0rd, tc1rd;
	wire [5:0] hwint;
	wire we, wedev0, wedev1, irq0, irq1;
NormalDatapath ndp(.clk(clk), .reset(reset), .PrAddr(praddr), .PrWD(prwd), .PrWE(we), .PrRD(prrd), .HWInt(hwint));
Bridge bridge(.PrAddr(praddr), .DevWE(we), .PrRD(prrd), .HWInt(hwint),
			  .Dev0Int(irq0), .Dev0RD(tc0rd), .Dev1Int(irq1), .Dev1RD(tc1rd), .WEDev0(wedev0), .WEDev1(wedev1));
COCOTimerCounter TC0(.clk(clk), .reset(reset), .Addr(praddr), .WE(wedev0), .WD(prwd), .RD(tc0rd), .IRQ(irq0));
COCOTimerCounter TC1(.clk(clk), .reset(reset), .Addr(praddr), .WE(wedev1), .WD(prwd), .RD(tc1rd), .IRQ(irq1));
defparam TC1.base = 32'h00007F10;
endmodule
