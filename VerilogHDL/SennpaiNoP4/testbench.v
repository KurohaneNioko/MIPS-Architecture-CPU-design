`include  ".\\head.v"
`define     DELAY_MS    1000000
module testbench();
reg clk ;
reg reset ;

wire [31:0] writedata ,data ;
wire memwrite ;
top Top( clk , reset , writedata , data , memwrite );

initial  begin 
  reset <= 1 ;
  #22; reset <= 0 ;
end  
always 
begin
  clk <= 1 ; #5 ; clk <= 0 ; #5 ;
end
always @ (posedge clk)
begin 
  if(memwrite)
   begin
      if(data === 32'h006fff90 )
        begin
          $display("Simulation succeed") ;
         // $stop ;
          end
          else if( data !== 32'h006fff90 )
          begin
            $display("Simulation failed") ;
          //  $stop ; 
             end
      end
      end
  

endmodule


