`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:40:43 01/04/2018 
// Design Name: 
// Module Name:    Coprocessor0 
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
module Coprocessor0(
    input clk,
    input reset,
    input WE,
    input [4:0] rd,
    input [31:0] Din,
    input [31:0] PC,
	input [31:0] instr,
	input cmprst,
    input [6:2] Exc,
    input [5:0] HWInt,
    input EXLset,
    input EXLclr,
    output Handle,
    output [31:0] EPCout,
    output [31:0] Dout
    );
	reg [31:0] epc; //14
	reg [15:10] im, ip;	//im:对应设备当前可以中断否？1可0不可, ip:对应设备当前状态 1中断了0没中断
	reg [6:2] exc;
	reg exl, ie, bd;	//exl即sr[1],标记当前是否在中断/异常, ie即sr[0],全局中断使能, bd即cause[31],标记是否是延迟槽指令异常
	wire error, IntReq;
	assign Dout = (rd == 12)?{16'b0, im[15:10], 8'b0, exl, ie}:	//SR
				  (rd == 13)?{bd, 15'b0, ip[15:10], 3'b0, exc[6:2], 2'b0}:	//CAUSE
				  (rd == 14)?epc:
				  (rd == 15)?32'h84DD_0001:0;	//PRID
	assign error = (Exc>0);
	assign IntReq = |(HWInt & im) & ie & !exl;
	assign Handle = error|IntReq;
	assign EPCout = epc;
	
	initial begin
		im <= 0;
		exl <= 0;
		ie <= 0;
		
		bd <= 0;
		ip <= 0;
		exc <= 0;
		
		epc <= 0;
	end
	always @(posedge clk) begin
		if(~reset) begin
		im <= (WE & rd==12)? Din[15:10]:im;
		exl <= (WE & rd==12)? Din[1]:
			   (Handle)?1:
			   (EXLclr)?0:exl;
		ie <= (WE & rd==12)? Din[0]:ie;

		epc <= (WE & rd==14)? Din:
			   (Handle & bd)? {PC[31:2], 2'b00} - 4:
			   (Handle & ~bd)?{PC[31:2], 2'b00}:
			   epc;
		bd <= (`beq&cmprst)|`j|`jal|`jalr|`jr|(`bne&cmprst)|(`blez&cmprst)|(`bgez&cmprst)|(`bgtz&cmprst)|(`bltz&cmprst);
		ip <= HWInt;
		exc <= (Handle)?Exc:exc;
		end
		else if(reset) begin
		im <= 0;
		exl <= 0;
		ie <= 0;
		
		bd <= 0;
		ip <= 0;
		exc <= 0;
		
		epc <= 0;
		end
	end

endmodule
