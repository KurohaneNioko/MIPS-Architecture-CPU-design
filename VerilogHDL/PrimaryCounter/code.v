`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:18:03 10/21/2017 
// Design Name: 
// Module Name:    code 
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
module code(
    input Clk,
    input Reset,
    input Slt,
    input En,
    output [63:0] Output0,
    output [63:0] Output1
    );
    reg[63:0] ValidTime0, ValidTime1, Counter0, Counter1;
    assign Output0=Counter0;
    assign Output1=Counter1;
    initial begin
        ValidTime0=0;
        ValidTime1=0;
        Counter0=0;
        Counter1=0;
    end
    always @(posedge Clk) begin
    if (Reset==1'b1)
       begin
         ValidTime0<=0;
         ValidTime1<=0;
         Counter0<=0;
         Counter1<=0;
       end
    else if (Reset==1'b0 && En==1'b1)begin
        if (Slt==1'b0) begin
            ValidTime0=ValidTime0+1;
            Counter0=Counter0+1;
            end
        else if (Slt==1'b1) begin
            ValidTime1=ValidTime1+1;
            if (ValidTime1%4==0)begin
              Counter1=Counter1+1;
            end
            end 
       end  
    end

endmodule
