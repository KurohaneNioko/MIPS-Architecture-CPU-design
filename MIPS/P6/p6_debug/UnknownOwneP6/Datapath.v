`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:43:56 12/12/2017 
// Design Name: 
// Module Name:    Datapath 
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
module Datapath(
	input clk,
	input reset,
	input PC_En,
	input D_En,
	input E_Clr,
	input [1:0] Res_D,
	input [1:0] Res_E,
	input [1:0] Res_M,
	input [3:0] Branch_D,
	input [1:0] regdst_D,
	input [2:0] F_GRF_RD1_D,
	input [2:0] F_GRF_RD2_D,
	input [2:0] F_ALU_A_E,
	input [2:0] F_ALU_B_E,
	input [2:0] F_DM_RD2_M,
	input [2:0]	Extop,
	input ALU_sel_E,
	input [3:0] ALUOp_E,
	input [3:0] mult_div_sel_E,
	input [2:0] D_E_ALU_sel,
	input [1:0] shiftop_E,
	input MemWrite_M,
	input RegWrite_M,
	input [3:0] DM_sel_M,
	input [1:0] Mem2Reg_M,
	output busy_E,
	output start,
	output [1:0] regdst_E,
	output [1:0] regdst_M,
	output [1:0] regdst_W,
	output [1:0] Res_W,
	output [31:0] IR_D,
	output [31:0] IR_E,
	output [31:0] IR_M,
	output [31:0] IR_W
    );
	 
	wire [31:0] pc ,pc8 ,pc_D ,pc8_D ,pc_E ,pc8_E ,pc_M ,pc8_M ,pc_W ,pc8_W ,npc;
	wire [31:0] IR;

	wire [31:0] GRF_out_RD1 ,GRF_out_RD2;
	wire [31:0] N_RD1_D ,N_RD2_D ,N_RD1_E, N_RD2_E;
	wire [31:0] Ext_B_D ,Ext_B_E;
	wire [31:0] ALU_A_E ,ALU_B_E ,ALU_C_E;
	wire [31:0]	ALU_C_M ,ALU_C_W;
	wire [31:0] DM_Write_M ,N_DM_Write_M;
	wire [31:0] DM_out_M ,DM_out_W;
	wire regwrite_W;
	wire [1:0] pc_sel;
	wire [1:0] Mem2Reg_W;
	wire [31:0] GRF_ALU_B_E;
	wire [31:0] reg_writedata_W;
	wire [31:0] RALU_C_E, hi_E, lo_E;
	
//F级结构
	PC PC0 (														//
    .clk(clk), 			//
    .reset(reset), 		//
    .PC_En(PC_En), 		//
    .pc_sel(pc_sel), 	//
    .npc_reg(N_RD1_D), 	//
    .npc(npc),				//
	 .pc8(pc8),				//
    .pc(pc)					//	
    );
	 
	 IM_rom IM_rom0 (											//
    .pc(pc), 				//
    .IR(IR)					//
    );
//D级寄存器
	 Reg_D Reg_D0 (											//
    .clk(clk), 			//
    .reset(reset), 		//
    .D_En(D_En), 			//
    .IR(IR), 				//
    .pc(pc), 				//
    .pc8(pc8), 			//
    .IR_D(IR_D), 			//
    .pc_D(pc_D), 			//
    .pc8_D(pc8_D)			//
    );
//D级结构
	GRF GRF0 (													//
    .clk(clk), 			//
    .reset(reset), 		//
    .IR_D(IR_D), 			//
    .IR_W(IR_W), 			//*
    .pc_W(pc_W), 			//
    .regwrite_W(regwrite_W), 				//
    .reg_writedata_W(reg_writedata_W), //
    .regdst_W(regdst_W), 					//*
    .GRF_out_RD1(GRF_out_RD1), 			//
    .GRF_out_RD2(GRF_out_RD2)				//
    );
	 
	GRF_RD1_mux mux1 (												//
    .GRF_out_RD1(GRF_out_RD1), 			//
    .ALU_C_M(ALU_C_M), 						//
	 .pc8_M(pc8_M),
    .ALU_C_W(ALU_C_W), 						//
	 .pc8_W(pc8_W),
    .DM_out_W(DM_out_W), 					//
    .F_GRF_RD1_D(F_GRF_RD1_D), 				//*
    .N_RD1_D(N_RD1_D)						//
    );
	 
	GRF_RD2_mux mux2 (												//
    .GRF_out_RD2(GRF_out_RD2), 			//
    .ALU_C_M(ALU_C_M), 						//
	 .pc8_M(pc8_M),
    .ALU_C_W(ALU_C_W), 						//
	 .pc8_W(pc8_W),
    .DM_out_W(DM_out_W), 					//
    .F_GRF_RD2_D(F_GRF_RD2_D), 				//*
    .N_RD2_D(N_RD2_D)						//
    );
	 
	CMP CMP0 (															//
    .N_RD1_D(N_RD1_D), 						//
    .N_RD2_D(N_RD2_D), 						//
    .Branch_D(Branch_D), 						//*
    .pc_sel(pc_sel)							//
    );
	
	NPC NPC0 (															//
    .pc8_D(pc8_D), 	//
    .IR_D(IR_D), 		//
    .npc(npc)			//
    );
	 
	Extender Extender0 (												//
    .Ext_A_D(IR_D [15:0]), 	//
    .Extop(Extop), 				//*
    .Ext_B_D(Ext_B_D)			//
    );
//E级寄存器	
	Reg_E Reg_E0 (														//
    .clk(clk), 			//*
    .reset(reset), 		//*
    .E_Clr(E_Clr), 		//*
    .IR_D(IR_D), 			//
    .N_RD1_D(N_RD1_D), 	//
    .N_RD2_D(N_RD2_D), 	//
    .Res_D(Res_D), 		//*
    .regdst_D(regdst_D), //*
    .Ext_B_D(Ext_B_D), 	//
    .pc_D(pc_D), 			//
    .pc8_D(pc8_D), 		//
    .IR_E(IR_E), 			//*
    .N_RD1_E(N_RD1_E), 	//
    .N_RD2_E(N_RD2_E), 	//
    //.Res_E(Res_E), 		//*
    .regdst_E(regdst_E),//*
    .Ext_B_E(Ext_B_E), 	//
    .pc_E(pc_E), 			//
    .pc8_E(pc8_E)			//
    );
		
	F_ALU_A_E_mux mux3 (									//
    .N_RD1_E(N_RD1_E), 	//
    .ALU_C_M(ALU_C_M), 	//
	 .pc8_M(pc8_M),
    .ALU_C_W(ALU_C_W), 	//
	 .pc8_W(pc8_W),
    .DM_out_W(DM_out_W), //
    .F_ALU_A_E(F_ALU_A_E), //*
    .ALU_A_E(ALU_A_E)	//
    );
	
	F_ALU_B_E_mux mux4 (								//
    .N_RD2_E(N_RD2_E), 	//
    .ALU_C_M(ALU_C_M),	// 
	 .pc8_M(pc8_M),
    .ALU_C_W(ALU_C_W), 	//
	 .pc8_W(pc8_W),
    .DM_out_W(DM_out_W), //
    .F_ALU_B_E(F_ALU_B_E), 	//*
    .GRF_ALU_B_E(GRF_ALU_B_E)		//
    );
	 
	ALU_sel_mux mux5 (								//
    .GRF_ALU_B_E(GRF_ALU_B_E), 	//
    .Ext_B_E(Ext_B_E), 				//
    .ALU_sel_E(ALU_sel_E), 		//*
    .ALU_B_E(ALU_B_E)	//
    );
	 
	ALU ALU0 (											//
    .ALU_A_E(ALU_A_E),	// 
    .ALU_B_E(ALU_B_E), 	//
	 .IR_E(IR_E),
	 .shiftop_E(shiftop_E),
    .ALUOp_E(ALUOp_E), 	//*
    .ALU_C_E(ALU_C_E)	//
    );

	mult_div Mult_Div (
    .clk(clk), 
    .reset(reset), 
    .ALU_A_E(ALU_A_E), 
    .GRF_ALU_B_E(GRF_ALU_B_E), 
    .mult_div_sel_E(mult_div_sel_E), 
	 .start(start),
    .busy_E(busy_E), 
    .hi_E(hi_E), 
    .lo_E(lo_E)
    );
	 
	 Alu_Div_mux ALU_Div_mux(
	.ALU_C_E(ALU_C_E),	//
	.hi_E(hi_E),			//
	.lo_E(lo_E),			//
	.D_E_ALU_sel(D_E_ALU_sel),
	.RALU_C_E(RALU_C_E)	//
	);
//M级寄存器
	Reg_M Reg_M0 (										//
    .clk(clk), 			//*
    .reset(reset), 		//*
    .IR_E(IR_E), 			//*
    .RALU_C_E(RALU_C_E),	// 
    .DM_Write_E(GRF_ALU_B_E), 	//
    .regdst_E(regdst_E), //*
    .pc_E(pc_E), 			//
    .pc8_E(pc8_E),		// 
    .IR_M(IR_M), 			//*
    .ALU_C_M(ALU_C_M),	// 
    .DM_Write_M(DM_Write_M), //
    .regdst_M(regdst_M), //*
    .pc_M(pc_M), 			//
    .pc8_M(pc8_M)			//
    );
		
	F_DM_RD2_M_mux mux6 (										//
    .RD2_M(DM_Write_M), //
    .ALU_C_W(ALU_C_W), 	//
    .DM_out_W(DM_out_W), //
    .F_DM_RD2_M(F_DM_RD2_M), //*
    .N_DM_Write_M(N_DM_Write_M)	//
    );
	
	DM DM0 (															//
    .clk(clk), 		//*
    .reset(reset), 	//*
    .MemWrite_M(MemWrite_M), //*
	 .DM_sel_M(DM_sel_M),
    .pc_M(pc_M), 		//
    .IR_M(IR_M), 		//*
    .ALU_C_M(ALU_C_M), 	//
    .N_DM_Write_M(N_DM_Write_M), //
    .DM_out_M(DM_out_M)	//
    );
	
	Reg_W Reg_w (								//
    .clk(clk), 		//*
    .reset(reset), 	//*
    .RegWrite_M(RegWrite_M),	//* 
    .Res_M(Res_M), 	//*
    .Mem2Reg_M(Mem2Reg_M), //*
	 .regdst_M(regdst_M),
    .IR_M(IR_M), 		//*
    .pc_M(pc_M), 		//
    .pc8_M(pc8_M), 	//
    .DM_out_M(DM_out_M), 	//
    .ALU_C_M(ALU_C_M), 		//
    .RegWrite_W(regwrite_W), //
    .Res_W(Res_W), 	//*
    .Mem2Reg_W(Mem2Reg_W), //
	 .regdst_W(regdst_W),
    .IR_W(IR_W), 		//*
    .pc_W(pc_W), 		//
    .pc8_W(pc8_W), 	//
    .DM_out_W(DM_out_W), 	//
    .ALU_C_W(ALU_C_W)		//
    );
	 
	Mem2Reg_mux mux8 (									//
    .pc8_W(pc8_W), 	//
    .ALU_C_W(ALU_C_W), //
    .DM_out_W(DM_out_W), //
    .Mem2Reg_W(Mem2Reg_W), //
    .reg_writedata(reg_writedata_W)//
    );

	 



endmodule
