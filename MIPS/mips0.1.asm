lui $t0 0xf65b
ori $t1 $0 0xabfe
lui $t4 0xaf78
tiao:
ori $t2 $0 0x3018
addu $t5 $t1 $t3
beq $t4 $t5 end
lui $t3 0x49bf
j tiao
addu $t4 $t1 $t3
addu $t4 $t4 $t3
end:
subu $t5 $t1 $t2
#addu $t4 $t4 $t3
ori $t3 $0 0x3044
func:
beq $t3 $31 ha		
addu $t4 $t4 $t2
ori $t5 $t3 0x6349
jal func
addu $t5 $t2 $t3
subu $t1 $t2 $t5
ha:
subu $t4 $t4 $0
addu $t5 $0 $t4
beq $t4 $t5 end6	
subu $t4 $t5 $t3
addu $t6 $t2 $t3
j ha
end6:
ori $t3 $t4 0x26cb
ori $1 $0 48
addu $ra $ra, $1
lui $2 0x41ba
jr $ra			
addu $1 $0 $t3
subu $t4 $t4 $t1
ori $s0 $0 24
addu $ra $ra $s0
stein:jr $ra
addu $t4 $t5 $t1
subu $t2 $t4 $t3
ori $1 $0 4
jal stein		
addu $ra $ra $1		
lui $s1 0x6249
subu $s1 $s1 $31
jal stein
subu $t0 $t3 $t5
lui $t0 0xf65b
ori $t1 $0 0xabfe
lui $t4 0xaf78
ori $t2 $0 0x3018
addu $t5 $t1 $t3
beq $t4 $t5 end
lui $t3 0x49bf
j tiao
addu $t4 $t1 $t3
addu $t4 $t4 $t3
subu $t5 $t1 $t2
#addu $t4 $t4 $t3
ori $t3 $0 0x3044
beq $t3 $31 ha		
addu $t4 $t4 $t2
ori $t5 $t3 0x6349
jal func
addu $t5 $t2 $t3
subu $t4 $t4 $0
addu $t5 $0 $t4
beq $t4 $t5 end6	
subu $t4 $t5 $t3
addu $t6 $t2 $t3
j ha
ori $t3 $t4 0x26cb
ori $1 $0 48
addu $ra $ra, $1
lui $2 0x41ba
jr $ra			
addu $1 $0 $t3
subu $t4 $t4 $t1
ori $s0 $0 24
addu $ra $ra $s0
jr $ra
addu $t4 $t5 $t1
subu $t2 $t4 $t3
ori $1 $0 4
jal stein		
addu $ra $ra $1		
lui $s1 0x6249
subu $s1 $s1 $31
jal stein
subu $t0 $t3 $t5
ori $t2 $0 0x3000
lui $t3 0x49bf
addu $t5 $t1 $t3
sw $t5 0($0)
lw $t4 0($0)
addu $t1 $t1 $t3
beq $t4 $t5 end 	
sw $31 4($0)
subu $31 $31 4
beq $t4 $t5 end
lui $t4 0x83ba
nop
lw $31 4($0)	
addu $t1 $t1 $t2
jr $31			
addu $t4 $t0 $t2
subu $t4 $t3 $t1
jal func
addu $t6 $t4 $t5
ori $s0 $0 0xfa6b
addu $s1 $t4 $s0
ori $t2 $0 0x3000
lui $t3 0x49bf
addu $t5 $t1 $t3
addu $t4 $t1 $t3
beq $t4 $t5 end		
subu $t6 $t2 $t3
ori $1 $0 4
subu $31 $31 $1
jr $31				
sw $t4 0($0)
jr $31
subu $t6 $t3 $t1
jal func
lui $s0 0x462b
ori $s1 $0 0x336c
subu $s2 $s0 $s1
nop
