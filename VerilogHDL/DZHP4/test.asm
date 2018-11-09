lui $s2,1
ori $1,0x0000fff6
subu $s2,$s2,$1
ori $t1,$0,1
ori $t4,$0,4
start:
nop
beq $s0,$s2,end
ori $s1,$0,0
ori $t0,$0,0
for_i:
beq $t0,$s0,done_i
addu $s1,$s1,$t0
addu $t0,$t0,$t1
beq $0,$0,for_i
done_i:
sw $s1,($t2)
addu $t2,$t2,$t4
addu $s0,$s0,$t1
beq $0,$0,start
end:
lw $s0,24($0)