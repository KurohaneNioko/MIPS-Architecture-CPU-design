`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:13:28 12/12/2017 
// Design Name: 
// Module Name:    enStall 
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
//因为可能既暂停又要jr跳转，则暂停的优先级高一些
//暂停，清除E寄存器值，冻结PC、D级
//Branch成功时，将D寄存器清零（E也可以清零，因为beq等后面不能识别）
module enStall(
	input Stall_Data,
	output PC_En,
	output D_En,
	output E_Clr
    );
	
	assign PC_En = Stall_Data;
	assign D_En	 = Stall_Data;
	assign E_Clr = Stall_Data;


endmodule
