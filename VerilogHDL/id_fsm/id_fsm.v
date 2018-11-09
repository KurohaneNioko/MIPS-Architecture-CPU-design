`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:53:07 10/22/2017 
// Design Name: 
// Module Name:    id_fsm 
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
module id_fsm(
    input [7:0] char,
    input clk,
    output reg out
    );
    integer state;
    initial begin
        out = 0;
        state = 0;
    end
    always @(posedge clk) begin
        case (state)
          0:begin
                state <= (char >= 97 && char <= 122) || (char >= 65 && char <= 90) ? 1 : 0;
                out <= 0;
            end
          1:begin
                if( (char >= 97 && char <= 122) || (char >= 65 && char <= 90) == 1 ) begin
                    out <= 0;
                    state <= 1;
                    end
                else if ( char >= 48 && char <= 57 ) begin
                    out <= 1;
                    state <= 2;
                    end
                else begin
                    out <= 0;
                    state <= 0;
                end
            end
          2:begin
                if( (char >= 97 && char <= 122) || (char >= 65 && char <= 90) == 1 ) begin
                    out <= 0;
                    state <= 1;
                    end
                else if ( char >= 48 && char <= 57 ) begin
                    out <= 1;
                    state <= 2;
                    end
                else begin
                    out <= 0;
                    state <= 0;
                end
            end
        
        endcase
    end 
endmodule
