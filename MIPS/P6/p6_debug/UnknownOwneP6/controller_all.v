`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:01:13 12/12/2017 
// Design Name: 
// Module Name:    controller_all 
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
module controller_all(
	input [31:0] IR_D,
	input [31:0] IR_E,
	input [31:0] IR_M,
	input [31:0] IR_W,
	input [1:0] Res_W,
	input busy_E,
	input start,
	input [1:0] regdst_E, 
   input [1:0] regdst_M, 
   input [1:0] regdst_W,
   output PC_En, 
   output D_En,  
   output E_Clr,
	output [2:0] Extop,
	output [1:0] Res_D,
	output [1:0] Res_E,
	output [1:0] Res_M,
	output [1:0] shiftop_E,
	output [3:0] Branch_D,
	output [1:0] regdst_D,
	output ALU_sel_E,
	output [3:0] mult_div_sel_E,
	output [2:0] D_E_ALU_sel,
	output [3:0] ALUOp_E,
	output MemWrite_M,
	output RegWrite_M,
	output [3:0] DM_sel_M,
	output [1:0] Mem2Reg_M,
	output [2:0] F_GRF_RD1_D, 
   output [2:0] F_GRF_RD2_D, 
   output [2:0] F_ALU_A_E, 
   output [2:0] F_ALU_B_E, 
   output [2:0] F_DM_RD2_M
    );
	
	wire Tuse_RS0 ,Tuse_RS1 ,Tuse_RT0 ,Tuse_RT1 ,Tuse_RT2;
	wire [4:0] A3_E ,A3_M ,A3_W;
	wire Stall_Data;
	
	control_D control_D0 (						//
    .IR_D(IR_D), 		//*
    .Extop_D(Extop), //*
    .Res_D(Res_D), 	//*
    .Branch_D(Branch_D),	//* 
    .regdst_D(regdst_D)		//*
    );
	 
	control_E control_E0 (						//
    .IR_E(IR_E), 		//*
    .ALU_sel_E(ALU_sel_E),	//* 
	 .D_E_ALU_sel(D_E_ALU_sel),
	 .Res_E(Res_E),
	 .shiftop_E(shiftop_E),
	 .mult_div_sel_E(mult_div_sel_E),
    .ALUOp_E(ALUOp_E)	//*
    );
	
	control_M control_M0 (						//
    .IR_M(IR_M), 	//*
	 .Res_M(Res_M),
    .MemWrite_M(MemWrite_M), //*
    .RegWrite_M(RegWrite_M), //*
	 .DM_sel_M(DM_sel_M),
    .Mem2Reg_M(Mem2Reg_M)		//*
    );
	 
	Decoder Decoder0 (							//
    .IR_D(IR_D), 	//*
    .Tuse_RS0(Tuse_RS0), 	//
    .Tuse_RS1(Tuse_RS1), 	//
    .Tuse_RT0(Tuse_RT0), 	//
    .Tuse_RT1(Tuse_RT1), 	//
    .Tuse_RT2(Tuse_RT2)		//
    );
	 
	Conflict_detection Conflict0 (				//
    .Tuse_RS0(Tuse_RS0), 	//
    .Tuse_RS1(Tuse_RS1), 	//
    .Tuse_RT0(Tuse_RT0), 	//
    .Tuse_RT1(Tuse_RT1), 	//
    .Tuse_RT2(Tuse_RT2), 	//
	 .busy_E(busy_E),
	 .start(start),
    .Res_E(Res_E), 			//*
    .Res_M(Res_M), 			//*
    .Res_W(Res_W), 			//*
    .IR_D(IR_D), 				//*
    .IR_E(IR_E), 				//*
    .IR_M(IR_M), 				//*
    .IR_W(IR_W), 				//*
    .regdst_E(regdst_E), 	//*
    .regdst_M(regdst_M), 	//*
    .regdst_W(regdst_W), 	//*
    .A3_E(A3_E), 			//
    .A3_M(A3_M), 			//
    .A3_W(A3_W), 			//
    .Stall_Data(Stall_Data)	//
    );
	 
	enStall EnStall (								//
    .Stall_Data(Stall_Data), 	//
    .PC_En(PC_En), 		//*
    .D_En(D_En), 			//*
    .E_Clr(E_Clr)			//*
    );
	 
	transmit Transmit (							//
    .Res_E(Res_E), 			//*
    .Res_M(Res_M), 			//*
    .Res_W(Res_W), 			//*
    .A3_E(A3_E), 		//
    .A3_M(A3_M), 		//
    .A3_W(A3_W), 		//
    .IR_D(IR_D), 				//*
    .IR_E(IR_E), 				//*
    .IR_M(IR_M), 				//*
    .F_GRF_RD1_D(F_GRF_RD1_D), 	//*
    .F_GRF_RD2_D(F_GRF_RD2_D), 	//*
    .F_ALU_A_E(F_ALU_A_E), 		//*
    .F_ALU_B_E(F_ALU_B_E), 		//*
    .F_DM_RD2_M(F_DM_RD2_M)		//*
    );



endmodule
