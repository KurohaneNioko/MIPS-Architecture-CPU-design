`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:19:41 12/07/2017 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	
	wire PC_En ,D_En ,E_Clr ;
	wire [1:0] Res_D ,Res_E ,Res_M ,Res_W;
	wire [3:0] Branch_D;
	wire [1:0] regdst_D ,regdst_E ,regdst_M ,regdst_W;
	wire [31:0] IR_D ,IR_E ,IR_M ,IR_W;
	wire [2:0] F_GRF_RD1_D , F_GRF_RD2_D ,F_ALU_A_E ,F_ALU_B_E ,F_DM_RD2_M; 
	wire MemWrite_M ,RegWrite_M;
	wire ALU_sel_E;
	wire [3:0] mult_div_sel_E;
	wire [1:0] shiftop_E;
	wire [2:0] Extop;
	wire [3:0] ALUOp_E;
	wire [2:0] D_E_ALU_sel;
	wire [1:0] Mem2Reg_M;
	wire [3:0] DM_sel_M;
	wire busy_E, start;
	Datapath datapath(
	 .clk(clk), 	//*
    .reset(reset), //*
    .PC_En(PC_En), 		//
    .D_En(D_En), 			//
    .E_Clr(E_Clr), 		//
    .Res_D(Res_D), 		//
    .Branch_D(Branch_D), 	//
    .regdst_D(regdst_D),	// 
    .F_GRF_RD1_D(F_GRF_RD1_D), 	//
    .F_GRF_RD2_D(F_GRF_RD2_D), 	//
    .F_ALU_A_E(F_ALU_A_E), 		//
    .F_ALU_B_E(F_ALU_B_E), 		//
    .F_DM_RD2_M(F_DM_RD2_M), 		//
    .Extop(Extop),					// 
    .ALU_sel_E(ALU_sel_E), 		//
	 .mult_div_sel_E(mult_div_sel_E),
    .ALUOp_E(ALUOp_E), 				//
	 .D_E_ALU_sel(D_E_ALU_sel),
	 .shiftop_E(shiftop_E),
    .MemWrite_M(MemWrite_M), 		//
    .RegWrite_M(RegWrite_M), 		//
	 .DM_sel_M(DM_sel_M),
    .Mem2Reg_M(Mem2Reg_M), 		//
    .regdst_E(regdst_E), 	//
    .regdst_M(regdst_M), 	//
    .regdst_W(regdst_W), 	//
	 .busy_E(busy_E),
	 .start(start),
    .Res_E(Res_E), 		//
    .Res_M(Res_M), 		//
    .Res_W(Res_W), 		//
    .IR_D(IR_D), 			//
    .IR_E(IR_E), 			//
    .IR_M(IR_M), 			//
    .IR_W(IR_W)			//
    );
	
	controller_all Controller_all (
    .IR_D(IR_D), 			//
    .IR_E(IR_E), 			//
    .IR_M(IR_M), 			//
    .IR_W(IR_W), 			//
    .Res_E(Res_E), 		//
	 .busy_E(busy_E),
	 .start(start),
    .Res_M(Res_M), 		//
    .Res_W(Res_W), 		//
    .regdst_E(regdst_E),	// 
    .regdst_M(regdst_M), 	//
    .regdst_W(regdst_W), 	//
    .PC_En(PC_En), 		//
    .D_En(D_En), 			//
    .E_Clr(E_Clr), 		//
    .Extop(Extop), 		//
    .Res_D(Res_D), 		//
    .Branch_D(Branch_D),	// 
    .regdst_D(regdst_D), 	//
    .ALU_sel_E(ALU_sel_E), 		//
	 .mult_div_sel_E(mult_div_sel_E),
	 .D_E_ALU_sel(D_E_ALU_sel),
    .ALUOp_E(ALUOp_E),				// 
	 .shiftop_E(shiftop_E),
    .MemWrite_M(MemWrite_M), 		//
    .RegWrite_M(RegWrite_M), 		//
	 .DM_sel_M(DM_sel_M),
    .Mem2Reg_M(Mem2Reg_M), 		//
    .F_GRF_RD1_D(F_GRF_RD1_D), 	//
    .F_GRF_RD2_D(F_GRF_RD2_D), 	//
    .F_ALU_A_E(F_ALU_A_E), 		//
    .F_ALU_B_E(F_ALU_B_E), 		//
    .F_DM_RD2_M(F_DM_RD2_M)		//
    );

endmodule
