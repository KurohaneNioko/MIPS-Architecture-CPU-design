`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:11:23 11/05/2017 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output reg [2:0] Output,
    output reg Overflow
    );
	 initial begin
	 Output=0;
	 Overflow=0;
	 end
	 always @(posedge Clk)begin
	  if(Reset)begin
	   Output<=0;
		Overflow<=0;
	  end
	  else begin
	   if(En)begin
		 case(Output)
		 2'b000:Output=2'b001;
		 2'b001:Output=2'b011;
		 2'b011:Output=2'b010;
		 2'b010:Output=2'b110;
		 2'b110:Output=2'b111;
		 2'b111:Output=2'b101;
		 2'b101:Output=2'b100;
		 2'b100:begin
		  Output=2'b000;
		  Overflow=1;
		 end
		 endcase
		end	
		
	  end
	 end


endmodule
