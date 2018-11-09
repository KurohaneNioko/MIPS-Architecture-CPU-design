`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:31:40 12/20/2017 
// Design Name: 
// Module Name:    StallUnit 
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
`include "InstrDefine.v"
module StallUnit(
    input [31:0] Instr_D,
	input [31:0] Instr_E,
	input CMPrst,
    input [2:0] Res_E,
    input [2:0] Res_M,
    input [2:0] Res_W,
	input [4:0] A3_E,
	input [4:0] A3_M,
    output Stall,
    output [4:0] rs_D,
    output [4:0] rt_D,
	output [4:0] rd_D,
    output [2:0] Res_D
    );
	wire[31:0] instr;
	wire Tuse_rs0, Tuse_rs1, Tuse_rt0, Tuse_rt1, Tuse_rt2,
		 Stall_rs0_E1, Stall_rs0_E2, Stall_rs0_M1, Stall_rs1_E2, Stall_rs,
		 Stall_rt0_E1, Stall_rt0_E2, Stall_rt0_M1, Stall_rt1_E2, Stall_rt,
		 Stall_eret;
	`define MOVZ 3'b100
	`define ALU 3'b001
	`define DM  3'b010
	`define PC  3'b011
	`define NW  3'b000	//Œﬁ–¥
	assign instr = Instr_D;	//”Î∫Í∆•≈‰
	assign rs_D = instr[25:21];
	assign rt_D = instr[20:16];
	assign rd_D = instr[15:11];
	assign Res_D  = (`addu | `subu | `ori | `lui | `addi | `add | `addiu | `sub | `srl | `sra | `sllv | `srlv | `srav | 
					 `_and | `_or | `_nor | `_xor | `andi | `xori | `slt | `slti | `sltu | `sltiu | `mfhi | `mflo |
					 `sll)?`ALU:
					(`lw | `lh | `lhu | `lb | `lbu | `mfc0)?						   `DM:
				    (`jal | `jalr)?					  	   `PC:
					/*(`mfc0)?`MOVZ:*/`NW;	//(`jal | (`bgezal & CMPrst))?`PC:`NW; (`movz & CMPrst)
	//Tuse±‡¬Î
	assign Tuse_rs0 = (`beq | `jr | `bne | `bgez | `blez | `bgtz | `bltz | `jalr);// | `movz
 	assign Tuse_rs1 = (`addu | `subu | `ori | `lui | `lw | `sw | `add | `addi | `addiu | `sub | `sllv | `srlv | `srav | `_and | 
					   `_or | `_nor | `_xor | `andi | `xori | `slt | `slti | `sltu | `sltiu | `lh | `lhu | `lb | `lbu | `sh | `sb |
					   `mult | `multu | `div | `divu | `mthi | `mtlo);
	assign Tuse_rt0 = (`beq | `bne);// | `movz
	assign Tuse_rt1 = (`addu | `subu | `add | `sub | `srl | `sra | `sllv | `srlv | `srav | `_and | `_or | `_nor | `_xor | `slt |
					   `sltu | `mult | `multu | `div | `divu | `mthi | `mtlo | `sll);
	assign Tuse_rt2 = (`sw | `sh | `sb | `mtc0);
	//rs‘›Õ£øÿ÷∆
	assign Stall_rs0_E1	= Tuse_rs0 & (Res_E == `ALU)& (rs_D == A3_E) & (rs_D != 0);
	assign Stall_rs0_E2	= Tuse_rs0 & (Res_E == `DM) & (rs_D == A3_E) & (rs_D != 0);
	assign Stall_rs0_M1	= Tuse_rs0 & (Res_M == `DM) & (rs_D == A3_M) & (rs_D != 0);
	assign Stall_rs1_E2	= Tuse_rs1 & (Res_E == `DM) & (rs_D == A3_E) & (rs_D != 0);
	assign Stall_rs = Stall_rs0_E1 | Stall_rs0_E2 | Stall_rs0_M1 | Stall_rs1_E2;
	//rt‘›Õ£øÿ÷∆
	assign Stall_rt0_E1	= Tuse_rt0 & (Res_E == `ALU)& (rt_D == A3_E) & (rt_D != 0);
	assign Stall_rt0_E2	= Tuse_rt0 & (Res_E == `DM) & (rt_D == A3_E) & (rt_D != 0);
	assign Stall_rt0_M1	= Tuse_rt0 & (Res_M == `DM) & (rt_D == A3_M) & (rt_D != 0);
	assign Stall_rt1_E2	= Tuse_rt1 & (Res_E == `DM) & (rt_D == A3_E) & (rt_D != 0);
	assign Stall_rt = Stall_rt0_E1 | Stall_rt0_E2 | Stall_rt0_M1 | Stall_rt1_E2;
	//detector!		mtc0 + eret
	assign Stall_eret = `eret & (Instr_E[31:26] == 6'b010000) & (Instr_E[25:21] == 5'b00100) & (Instr_E[15:11] == 14);
	//◊‹‘›Õ£øÿ÷∆
	assign Stall = Stall_rs | Stall_rt | Stall_eret;
endmodule
