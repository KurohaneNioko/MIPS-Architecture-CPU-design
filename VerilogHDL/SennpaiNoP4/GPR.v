module gpr( clk , RegWrite , RR1 , RR2 , WR3 , Wd , Rd1 ,Rd2);
input clk ; //clock
input RegWrite ; //control signal
input [4:0] RR1 , RR2 , WR3 ; //ReadReg1 ReadReg2 WriteReg3 address
input [31:0] Wd ; //Writedata
output [31:0] Rd1 ,Rd2 ; //ReadData1,ReadData2

reg [31:0] RF[31:0] ;// RF:register file

assign Rd1 = (RR1 != 0) ? RF[RR1] : 0 ; //read data from RF
assign Rd2 = (RR2 != 0) ? RF[RR2] : 0 ; 

always @ (posedge clk)  // when RegWrite == 1  write data to WriteReg address register
if(RegWrite)
  RF[WR3] <= Wd ; 

endmodule