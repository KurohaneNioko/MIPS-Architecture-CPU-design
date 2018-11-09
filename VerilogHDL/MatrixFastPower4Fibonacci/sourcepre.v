`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:13:41 10/26/2017 
// Design Name: 
// Module Name:    source 
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
module source(
    input [31:0] in,
    output [31:0] out
    );
    reg[31:0] rslt[3:0],ans,n,mat[3:0];
    assign out = ans;
    assign in = n;
    if (in == 32'b0) begin
        ans = 32'b0;
    end
    else begin
        rslt[0] = 32'b1;
        rslt[1] = 32'b0;
        rslt[2] = 32'b0;
        rslt[3] = 32'b1;
        mat[0] = 32'b1;
        mat[1] = 32'b1;
        mat[2] = 32'b1;
        mat[3] = 32'b0;
        while (n) begin
          if (n&1) begin
            rslt[0] = rslt[0] * mat[0] + rslt[1] * mat[2];
            rslt[1] = rslt[0] * mat[1] + rslt[1] * mat[3];
            rslt[2] = rslt[0] * mat[2] + rslt[2] * mat[3];
            rslt[3] = rslt[1] * mat[2] + rslt[3] * mat[3];
          end
            mat[0] = mat[0] * mat[0] + mat[1] * mat[2];
            mat[1] = mat[0] * mat[1] + mat[1] * mat[3];
            mat[2] = mat[0] * mat[2] + mat[2] * mat[3];
            mat[3] = mat[1] * mat[2] + mat[3] * mat[3];
            n = n>>1
        end
        ans = rslt[2];
    end

endmodule
