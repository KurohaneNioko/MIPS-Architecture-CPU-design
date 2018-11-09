lui $t0,0xff88
lui $t1 0xfa24
haa:
subu $t6 $t6 $t5
beq $t6 $t5 ha
jr $ra
ha:subu $t2 $t0 $t1
ori $t3 $t2 0x1b62
beq $t6, $t3, func
sw $t3, 4($0)
lui $t4 0xfa23
nop
beq $t1 $t4 ,ha
lw  $t6, 4($0)
lui $t5 0x0001
addu $t4 $t4, $t5
beq $t1 $t4, ha
func:jal haa
beq $t6, $t3, func
nop