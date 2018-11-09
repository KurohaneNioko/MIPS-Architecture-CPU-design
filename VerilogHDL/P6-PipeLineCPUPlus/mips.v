`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:58:50 12/19/2017 
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
`include "InstrDefine.v"
module mips(
    input clk,
    input reset
	);
	wire [31:0] npcout, pc_F, instr_F, instr,
				pc_D, pcadd4_D, instr_D, pcadd8_D, regV1_D, regV2_D, /*D级转发Mux中的支路*/
				v1_D, v2_D, /*D级转发Mux的结果*/ immout_D, 
				pc_E, v1_D2E, v2_D2E, /*从D级来的V1,V2,E级转发MUX支路*/ imm_E, pcadd8_E, instr_E, ao_E,
				v1_E, v2_E, /*E级转发MUX结果*/ hilo_E, hi, lo,
				ao_M, pc_M, pcadd8_M, hilo_M, cal_M, srcB_M, instr_M, dmout_M, wdm_M,/*M级写内存数据转发支路*/ MUXed_WDM_M, /*M级写内存数据转发结果*/
				pc_W, wd_W/*分选后的写回数据*/, dmout_W, ao_W, pcadd8_W;
	wire [4:0] a3, shift_E;
	wire [3:0] aluctrl, mdctrl;
	wire [2:0] fwd_v1_D, fwd_v2_D, fwd_v1_E, fwd_v2_E, fwd_W2M_M, load;
	wire [1:0] extctrl, regdst, men2reg;
	wire stall, pc_sel, cmprst, regwe, alusrcB, cmprst_E, menwrite, cmprst_M, busy, hilosel, aohlsel, wdmhlsel;
	assign instr = instr_D;
//Level Fetch
PC pc(.reset(reset), .clk(clk), .EN(~stall & ~(busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))), 
	  .NPC( (pc_sel==1)?npcout:(pc_F+4) ), .PC_F(pc_F));
IM im(.PC(pc_F), .Instr_F(instr_F));
//Level Decode
Decode Pipeline_D(.reset(reset), .clk(clk), .EN(~stall & ~(busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))), .PC_F(pc_F), .PCAdd4_F(pc_F+4), .Instr_F(instr_F), 
				  .PC_D(pc_D), .PCAdd4_D(pcadd4_D), .Instr_D(instr_D) );
ControlUnit_D cu_D(.Instr(instr_D), .CMPrst(cmprst), 
				   .MUX_PC_sel(pc_sel), .EXTCtrl(extctrl));
RF rf(.reset(reset), .clk(clk), .A1rs(instr_D[25:21]), .A2rt(instr_D[20:16]), 
	  .A3(a3), .RegWE(regwe), .WPC(pc_W), .RWD(wd_W), 
	  .V1_D(regV1_D), .V2_D(regV2_D));
	//从E,M,W级向D级转发
	`define E2D_rs		5	//E->D, rt(movz)
	`define E2D_PCAdd8	4	//E->D, PCAdd8
	`define M2D_PCAdd8	3	//M->D, PCAdd8
	`define M2D_ALU		2	//M->D, ALUOut
	`define W2D_WD		1	//W->D, WriteData
	`define ORIGINAL	0	//No Forward
assign v1_D = (fwd_v1_D == `E2D_rs)?v1_D2E:
			  (fwd_v1_D == `E2D_PCAdd8)?pcadd8_E:
			  (fwd_v1_D == `M2D_PCAdd8)?pcadd8_M:
			  (fwd_v1_D == `M2D_ALU)   ?ao_M:
			  (fwd_v1_D == `W2D_WD)    ?wd_W:regV1_D;
assign v2_D = (fwd_v2_D == `E2D_rs)?v1_D2E:
			  (fwd_v2_D == `E2D_PCAdd8)?pcadd8_E:
			  (fwd_v2_D == `M2D_PCAdd8)?pcadd8_M:
			  (fwd_v2_D == `M2D_ALU)   ?ao_M:
			  (fwd_v2_D == `W2D_WD)    ?wd_W:regV2_D;
NPC npc(.RegRead(v1_D), .Offset(instr_D[15:0]), .PC(pc_D), .InstrIndex(instr_D[25:0]), .PCAdd4(pcadd4_D), .Instr(instr_D), 
		.NPCout(npcout), .PCAdd8(pcadd8_D));
CMP cmp(.Instr(instr_D), .RD1(v1_D), .RD2(v2_D), 
		.CMPout(cmprst));
EXT ext(.Immin(instr_D[15:0]), .EXTOp(extctrl), 
		.ImmOut_D(immout_D));
		
//Level Execute
Execute Pipeline_E(.PC_D(pc_D), .V1_D(v1_D), .V2_D(v2_D), .ExtImm_D(immout_D), .Shift_D(instr_D[10:6]), .PCAdd8_D(pcadd8_D),
				   .reset(reset | stall | ~(busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))), .clk(clk),  .EN(reset|~reset),
				   .PC_E(pc_E), .V1_E(v1_D2E), .V2_E(v2_D2E), .ExtImm_E(imm_E), .Shift_E(shift_E), .PCAdd8_E(pcadd8_E));
ControlUnit_E cu_E(.reset(reset | stall), .clk(clk), .Instr_D(instr_D), .CMPrst_D(cmprst), .EN(~(busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))),
				   .ALUSrcB(alusrcB), .ALUCtrl(aluctrl), .RegDst(regdst), .Instr_E(instr_E), .CMPrst_E(cmprst_E),
				   .HILOSel(hilosel), .MDCtrl(mdctrl));
	//从M,W级向E级转发
	`define M2E_PCAdd8	3	//M->E, PCAdd8
	`define M2E_ALU		2	//M->E, ALUOut
	`define W2E_WD		1	//W->E, WriteData
	`define ORIGINAL	0	//No Forward
assign v1_E = (fwd_v1_E == `M2E_PCAdd8)?pcadd8_M:
			  (fwd_v1_E == `M2E_ALU)   ?ao_M:
			  (fwd_v1_E == `W2E_WD)    ?wd_W:v1_D2E;
assign v2_E = (fwd_v2_E == `M2E_PCAdd8)?pcadd8_M:
			  (fwd_v2_E == `M2E_ALU)   ?ao_M:
			  (fwd_v2_E == `W2E_WD)    ?wd_W:v2_D2E;
ALU alu(.SrcA_E(v1_E), .SrcB_E( (alusrcB == 1)?imm_E:v2_E ), .Shift_E(shift_E), .ALUCtrl(aluctrl), .AO_E(ao_E));
MultAndDiv md(.clk(clk), .reset(reset), .D1(v1_E), .D2(v2_E), .MDCtrl(mdctrl),
			  .Busy(busy), .HI(hi), .LO(lo) );
assign hilo_E = (hilosel == 0)?hi:lo;

//Level Memory
Memory Pipeline_M(.reset(reset | (busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))), .clk(clk),
				  .AO_E(ao_E), .WDM_E(v2_E), .PC_E(pc_E), .PCAdd8_E(pcadd8_E), .HIorLO_E(hilo_E),
				  .AO_M(cal_M), .WDM_M(srcB_M), .PC_M(pc_M), .PCAdd8_M(pcadd8_M), .HIorLO_M(hilo_M));
ControlUnit_M cu_M(.reset(reset | (busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))), .clk(clk),
				   .Instr_E(instr_E), .CMPrst_E(cmprst_E), 
				   .MemWrite(menwrite), .Load(load), .Instr_M(instr_M), .CMPrst_M(cmprst_M), .AOHLsel(aohlsel), .WDMHLsel(wdmhlsel));
assign ao_M = (aohlsel == 1 )? hilo_M : cal_M;
assign wdm_M = srcB_M;
	//从W级向M级转发sw的写入数据
	`define W2M_WD		1	//W->M, WriteData
	`define ORIGINAL	0	//No Forward
assign MUXed_WDM_M = (fwd_W2M_M == `W2M_WD)?wd_W:wdm_M;
DM dm(.reset(reset), .clk(clk), .WE(menwrite), .Load(load), .AO_M(ao_M), .WDM_M(MUXed_WDM_M), .PC_M(pc_M), .DMout_M(dmout_M));

//Level WriteBack
WriteBack Pipeline_W(.reset(reset), .clk(clk), .DMout_M(dmout_M), .AO_M(ao_M), .PC_M(pc_M), .PCAdd8_M(pcadd8_M), 
					 .DMout_W(dmout_W), .AO_W(ao_W), .PCAdd8_W(pcadd8_W), .PC_W(pc_W));
ControlUnit_W cu_W(.Instr_M(instr_M), .CMPrst_M(cmprst_M), .reset(reset), .clk(clk),
				   .Mem2Reg(men2reg), .RegWE(regwe));
assign wd_W = (men2reg == 1)?dmout_W:
			  (men2reg == 2)?pcadd8_W:ao_W;
			  
//Hazard
HazardUnit hu(.Instr_D(instr_D), .CMPrst(cmprst), .RegDst(regdst), .reset(reset), .clk(clk), .Stall(stall), 
			  .EN(~(busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))),
			  .Fwd_V1_D(fwd_v1_D), .Fwd_V2_D(fwd_v2_D), .Fwd_V1_E(fwd_v1_E), .Fwd_V2_E(fwd_v2_E), .Fwd_WDM_M(fwd_W2M_M),
			  .A3(a3));
endmodule
