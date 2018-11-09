module Pc( NPC , clk , Reset , PC );
input [31:2] NPC ;
input clk ;
input Reset ;
output [31:2] PC ;

reg [31:2]PC_ ;

assign PC = PC_;
always @(posedge clk)
if (Reset) PC_ <= 32'h0 ; //PC_ <= 32'h2EE ;
else
  PC_ <= NPC + 1 ;
endmodule 