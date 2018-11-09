`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:42:06 11/28/2017 
// Design Name: 
// Module Name:    Control_Unit 
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
module Control_Unit(
    input [5:0] Opcode,
    input [5:0] Funct,
	 input eZero,
    output [1:0] MemtoReg,
    output MemWrite,
    output ALUSrc,
    output [1:0] RegDst,
    output RegWrite,
    output [1:0] pcSrc,
    output [2:0] ALUOp,
    output [1:0] EXTOp,
	 output [2:0] DMOp
    );
	wire Rtype,addu,subu,ori,lw,sw,beq,lui,j,jal,jr;
	/*always @* begin
		case (Opcode)
			'b000000:begin
							case (Funct)
							'b100001:addu=1;
							'b100011:subu=1;
							'b001000:jr=1;
						   
							default:j=0;
							endcase
						end
			'b001101:ori=1;
			'b100011:lw=1;
			'b101011:sw=1;
			'b001111:lui=1;
			'b000100:beq=1;
			'b000010:j=1;
			'b000011:jal=1;
			default:j=0;
		endcase
	end */
	assign Rtype=(Opcode==6'b000000);
	assign addu=Rtype&(Funct==6'b100001);
	assign subu=Rtype&(Funct==6'b100011);
	assign or_=Rtype&(Funct==6'b100101);
	//assign or_=Rtype&(Funct==6'b100101);
	assign jr=Rtype&(Funct==6'b001000);
	assign ori=(Opcode==6'b001101);
	assign lw=(Opcode==6'b100011);
	assign sw=(Opcode==6'b101011);
	assign lui=(Opcode==6'b001111);
	assign beq=(Opcode==6'b000100);
	assign j=(Opcode==6'b000010);
	assign jal=(Opcode==6'b000011);
	assign jalr=Rtype&(Funct==6'b001001);
	assign lb=(Opcode==6'b100000);
	assign lbu=(Opcode==6'b100100);
	assign lh=(Opcode==6'b100001);
	assign lhu=(Opcode==6'b100101);
	
	assign MemtoReg=(lw|lb|lbu|lh|lhu)?1:     // toReg select signal // from DM
						 (jal|jalr)?2:									//  from PC
						 0;
	assign MemWrite=sw;
	assign ALUSrc=ori|lw|lb|lbu|lh|lhu|sw|lui;
	assign RegDst=(addu|subu|jalr|or_)?1:
					   jal?2:
						0;
	assign RegWrite=addu|subu|ori|lw|lb|lbu|lh|lhu|lui|jal|jalr|or_;
	assign pcSrc=(beq&eZero)?1:
					 (j|jal)?2:
					 (jr|jalr)?3:
					 0;
	assign ALUOp=(addu|lw|lb|lbu|lh|lhu|sw|lui)?0:
					 (subu|beq)?3'b001:
					 (ori|or_)?3'b011:
					 0;
	assign EXTOp=ori?1:lui?2:0;
	assign DMOp=lw?0:
					lb?1:
					lbu?2:
					lh?3:
					lhu?4:
					0;
endmodule
