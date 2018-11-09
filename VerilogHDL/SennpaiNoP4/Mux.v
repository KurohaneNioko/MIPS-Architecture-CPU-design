module Mux2_MemtoReg( C , Dm , MemtoReg , R);
input [31:0] C ,Dm ;//A is from ALU result C , Dm is from DataMemory
input MemtoReg ;
output [31:0] R ;
assign R = MemtoReg ? Dm : C ;
endmodule 

module Mux2_RegDst( Rt , Rd , RegDst , A3 );
input [4:0] Rt , Rd ; 
input RegDst ;
output [4:0] A3 ;
assign A3 = RegDst ? Rd : Rt ;
endmodule

module Mux2_AluSrc( RD2 , Ext , AluSrc , B );
input [31:0] RD2 , Ext ;
input AluSrc ;
output [31:0] B ;
assign B = AluSrc ? Ext : RD2 ;
endmodule