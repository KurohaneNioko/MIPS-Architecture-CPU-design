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
module NormalDatapath(
    input clk,
    input reset,
	output [31:0] PrAddr,
	output [31:0] PrWD,
	output PrWE,
	input  [31:0] PrRD,
	input [7:2] HWInt
	);
	wire [31:0] npcout, pc_F, instr_F, instr,
				pc_D, pcadd4_D, instr_D, pcadd8_D, regV1_D, regV2_D, /*D级转发Mux中的支路*/
				v1_D, v2_D, /*D级转发Mux的结果*/ immout_D, 
				pc_E, v1_D2E, v2_D2E, /*从D级来的V1,V2,E级转发MUX支路*/ imm_E, pcadd8_E, instr_E, ao_E,
				v1_E, v2_E, /*E级转发MUX结果*/ hilo_E, hi, lo, cp0rd_M, cp0rd_W,
				ao_M, pc_M, pcadd8_M, hilo_M, cal_M, srcB_M, instr_M, dmout_M, wdm_M,/*M级写内存数据转发支路*/ MUXed_WDM_M, /*M级写内存数据转发结果*/
				pc_W, wd_W/*分选后的写回数据*/, dmout_W, ao_W, pcadd8_W, DMDevout, epcout;
				
	wire [4:0] a3, shift_E, excout_D, excout_E, excout_M, exc_MCP0, exc_FD, exc_DE, exc_EM;
	wire [3:0] aluctrl, mdctrl;
	wire [2:0] fwd_v1_D, fwd_v2_D, fwd_v1_E, fwd_v2_E, fwd_W2M_M, load;
	wire [1:0] extctrl, regdst, men2reg;
	wire stall, pc_sel, cmprst, regwe, alusrcB, cmprst_E, menwrite, cmprst_M, busy, hilosel, aohlsel, wdmhlsel, 
		 overflow, handle, cp0we, fwd_eret, exlclr;
	assign instr = instr_D;/*P6用的instr_E*/
	assign PrAddr = ao_M;
	assign PrWE = menwrite&(~handle);
	assign PrWD = MUXed_WDM_M;
	
//Level Fetch
PC pc(.reset(reset), .clk(clk), .EN(((~stall) & ~(busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo)))|handle), 
	  .NPC( (handle)?32'h00004180:(pc_sel==1)?npcout:(pc_F+4) ), .PC_F(pc_F), .Exc_F(exc_FD));
IM im(.PC(pc_F), .Instr_F(instr_F));
//Level Decode
Decode Pipeline_D(.reset(reset|handle), .clk(clk), .EN(~stall & ~(busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))), .PC_F(pc_F), .PCAdd4_F(pc_F+4), .Instr_F(instr_F),
				  .PC_D(pc_D), .PCAdd4_D(pcadd4_D), .Instr_D(instr_D), .Exc_D(exc_DE) );
ControlUnit_D cu_D(.Instr(instr_D), .CMPrst(cmprst), 
				   .MUX_PC_sel(pc_sel), .EXTCtrl(extctrl));
Exc exc_D(.clk(clk), .reset(reset|handle), .Excin(exc_FD), .Excout(excout_D), .EN(~stall & ~(busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))));
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
		.ERET( (fwd_eret)?MUXed_WDM_M:epcout ), .NPCout(npcout), .PCAdd8(pcadd8_D));
CMP cmp(.Instr(instr_D), .RD1(v1_D), .RD2(v2_D), 
		.CMPout(cmprst));
EXT ext(.Immin(instr_D[15:0]), .EXTOp(extctrl), 
		.ImmOut_D(immout_D));
		
//Level Execute
Execute Pipeline_E(.PC_D(pc_D), .V1_D(v1_D), .V2_D(v2_D), .ExtImm_D(immout_D), .Shift_D(instr_D[10:6]), .PCAdd8_D(pcadd8_D),
				   .reset(reset | stall|handle|((busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo)))), .clk(clk),  .EN(reset|(~reset)),
				   /*.reset(reset | stall|handle), .clk(clk),  .EN(~(busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))), <-P6做法*/
				   .PC_E(pc_E), .V1_E(v1_D2E), .V2_E(v2_D2E), .ExtImm_E(imm_E), .Shift_E(shift_E), .PCAdd8_E(pcadd8_E),
				   .instr(instr_E), .Overflow(overflow), .Exc_E(exc_EM));
ControlUnit_E cu_E(.reset(reset | stall|handle|(busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))), .clk(clk), .Instr_D(instr_D), .CMPrst_D(cmprst), .EN(reset|(~reset)),
				   .ALUSrcB(alusrcB), .ALUCtrl(aluctrl), .RegDst(regdst), .Instr_E(instr_E), .CMPrst_E(cmprst_E),
				   .HILOSel(hilosel), .MDCtrl(mdctrl));
Exc exc_E(.clk(clk), .reset(reset | stall|handle), .Excin(excout_D==0?exc_DE:excout_D), .Excout(excout_E), .EN(~(busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))));
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
ALU alu(.SrcA_E(v1_E), .SrcB_E( (alusrcB == 1)?imm_E:v2_E ), .Shift_E(shift_E), .ALUCtrl(aluctrl), .AO_E(ao_E), .Overflow(overflow));
MultAndDiv md(.clk(clk), .reset(reset), .D1(v1_E), .D2(v2_E), .MDCtrl(mdctrl), .goback(handle), .Instr_M(instr_M),
			  .Busy(busy), .HI(hi), .LO(lo) );
assign hilo_E = (hilosel == 0)?hi:lo;

//Level Memory
Memory Pipeline_M(.reset(reset|handle /*| (busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))*/), .clk(clk),
				  .AO_E(ao_E), .WDM_E(v2_E), .PC_E(pc_E), .PCAdd8_E(pcadd8_E), .HIorLO_E(hilo_E), .instr(instr_M),
				  .AO_M(cal_M), .WDM_M(srcB_M), .PC_M(pc_M), .PCAdd8_M(pcadd8_M), .HIorLO_M(hilo_M), .Exc_M(exc_MCP0));
ControlUnit_M cu_M(.reset(reset|handle/*| (busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))*/), .clk(clk),
				   .Instr_E(instr_E), .CMPrst_E(cmprst_E), 	.CP0WE(cp0we),
				   .MemWrite(menwrite), .Load(load), .Instr_M(instr_M), .CMPrst_M(cmprst_M), .AOHLsel(aohlsel), .WDMHLsel(wdmhlsel));
Exc exc_M(.Excin(excout_E==0?exc_EM:excout_E), .Excout(excout_M), .reset(reset|handle/*| (busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))*/), .clk(clk), .EN(reset|~reset));
assign ao_M = (aohlsel == 1 )? hilo_M : cal_M;
assign wdm_M = srcB_M;
	//从W级向M级转发sw的写入数据
	`define W2M_WD		1	//W->M, WriteData
	`define ORIGINAL	0	//No Forward
assign MUXed_WDM_M = (fwd_W2M_M == `W2M_WD)?wd_W:wdm_M;
DM dm(.reset(reset), .clk(clk), .WE(menwrite&(~handle)), .Load(load), .AO_M(ao_M), .WDM_M(MUXed_WDM_M), .PC_M(pc_M), .DMout_M(dmout_M));

//中断异常处理
Coprocessor0 CP0(.clk(clk), .reset(reset), .WE(cp0we&~(handle)), .instr(instr_M), .cmprst(cmprst_M), .rd(instr_M[15:11]),
.Din(MUXed_WDM_M), .PC(pc_M), .Exc( (|HWInt)?5'b0:(excout_M==0)?exc_MCP0:excout_M), .HWInt(HWInt), .EXLset(), .EXLclr(exlclr),
.Handle(handle), .EPCout(epcout), .Dout(cp0rd_M) );

//Level WriteBack
assign DMDevout = (ao_M >= 32'h0 && ao_M <= 32'h0000_2fff)?dmout_M:PrRD;
WriteBack Pipeline_W(.reset(reset|handle), .clk(clk), .DMout_M(DMDevout), .AO_M(ao_M), .PC_M(pc_M), .PCAdd8_M(pcadd8_M), .CP0RD_M(cp0rd_M),
					 .DMout_W(dmout_W), .AO_W(ao_W), .PCAdd8_W(pcadd8_W), .PC_W(pc_W), .CP0RD_W(cp0rd_W));
ControlUnit_W cu_W(.Instr_M(instr_M), .CMPrst_M(cmprst_M), .reset(reset|handle), .clk(clk),
				   .Mem2Reg(men2reg), .RegWE(regwe), .EXLclr(exlclr));
assign wd_W = (men2reg == 1)?dmout_W:
			  (men2reg == 2)?pcadd8_W:
			  (men2reg == 3)?cp0rd_W:ao_W;
			  
//Hazard  这里也改了乘除阻塞逻辑
HazardUnit hu(.Instr_D(instr_D), .CMPrst(cmprst), .RegDst(regdst), .reset(reset|handle), .clk(clk), .Stall(stall), .Instr_E(instr_E),
			  .EN(~(busy & (`mult | `multu | `div | `divu | `mthi | `mtlo | `mfhi | `mflo))), .Instr_M(instr_M),
			  .Fwd_V1_D(fwd_v1_D), .Fwd_V2_D(fwd_v2_D), .Fwd_V1_E(fwd_v1_E), .Fwd_V2_E(fwd_v2_E), .Fwd_WDM_M(fwd_W2M_M),
			  .Fwd_eret(fwd_eret), .A3(a3));
endmodule
