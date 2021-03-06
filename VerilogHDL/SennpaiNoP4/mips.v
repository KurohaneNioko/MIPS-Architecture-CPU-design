module mips(clk_I , reset_I ,  IM_I , readData_I , 
pc_O , MemWrite_O , ALU_O , WriteData_O);
input clk_I ,reset_I ;
input [31:0] IM_I , readData_I;

output [29:0] pc_O ;
output [31:0] ALU_O , WriteData_O ;
output MemWrite_O ;

wire  RegDst , AluSrc , MemtoReg , RegWrite , IBeq , Ext_op ;
wire [1:0] AluCtr ;
ctr controls(IM_I[31:26] , IM_I[5:0] , RegDst , AluSrc , MemtoReg , 
RegWrite , MemWrite_O , IBeq , Ext_op , AluCtr );

datapath Datapath( clk_I , reset_I , RegDst , AluSrc , MemtoReg , RegWrite , MemWrite_O , IBeq ,
Ext_op , AluCtr , IM_I , readData_I , ALU_O , WriteData_O , pc_O);

endmodule



