module top( CLK_I , RESET_I , WRITEDATA_O , DATA , MEMWRITE );
input CLK_I , RESET_I ;
output [31:0] WRITEDATA_O , DATA ;  //data is data address
output  MEMWRITE ;

wire [29:0] pc ;
wire [31:0] IM , ReadData ;

//datapath and control
mips  MIPS(CLK_I , RESET_I ,  IM , ReadData , 
pc , MEMWRITE , DATA , WRITEDATA_O);

// IM
im_4k IMM( pc[9:0] , IM);

// DataMemroy
dm_4 DataMemroy( DATA[11:2]  , WRITEDATA_O , MEMWRITE , CLK_I , ReadData);

endmodule
