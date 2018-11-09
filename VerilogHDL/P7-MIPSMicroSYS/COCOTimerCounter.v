`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:54:39 01/02/2018 
// Design Name: 
// Module Name:    COCOTimerCounter 
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
module COCOTimerCounter(
    input clk,
    input reset,
    input [31:0] Addr,
    input WE,
    input [31:0] WD,
    output [31:0] RD,
    output IRQ
    );
    reg [31:0] ctrl, preset, count;
    wire [1:0] Mode;
    wire IM, En;
    parameter base = 32'h00007F00;
    assign Mode = ctrl[1:0];
    assign IM = ctrl[3];
    assign En = ctrl[0];
    assign IRQ = IM & (count == 0) & (Mode == 0);
    assign RD = (Addr - base) == 0 ? ctrl:
                (Addr - base) == 4 ? preset:
                (Addr - base) == 8 ? count:0;
    initial begin
        ctrl <= 0;
        preset <= 0;
        count <= 0;
    end
    always @(posedge clk) begin
        if(reset) begin
            ctrl <= 0;
            preset <= 0;
            count <= 0;
        end
        else if (reset == 0) begin
            if(Mode == 2'b00) begin
                if (En == 1) begin
                    count <= (count > 0) ? count - 1:
                             (count == 0 && ctrl == 1)? preset:
                             (count == 0 && ctrl == 0)? 0: count - 1;
                    ctrl <= (WE == 1 && (Addr - base) == 0)?WD:
                            (count == 1)?{ctrl[31:1],1'b0}:ctrl;
                    preset <= (WE == 1 && (Addr - base) == 4)?WD:preset;
                end
                else if(En == 0) begin
                    count <= count;
                    ctrl <= (WE == 1 && (Addr - base) == 0)?WD:ctrl;
                    preset <= (WE == 1 && (Addr - base) == 4)?WD:preset;
                end
            end
            if(Mode == 2'b01) begin
                if (En == 1) begin
                    count <= (count > 0) ? count - 1:
                             (count == 0)? preset: count;
                    ctrl <= (WE == 1 && (Addr - base) == 0)?WD:ctrl;
                    preset <= (WE == 1 && (Addr - base) == 4)?WD:preset;
                end
                else if(En == 0) begin
                    count <= count;
                    ctrl <= (WE == 1 && (Addr - base) == 0)?WD:ctrl;
                    preset <= (WE == 1 && (Addr - base) == 4)?WD:preset;
                end
            end
        end
    end

endmodule
