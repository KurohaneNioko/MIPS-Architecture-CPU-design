ori $s0,$0,1
ori $s3,$0,0x00003044
start:
ori $s1,$0,0
ori $t1,$0,1
ori $t4,$0,4
ori $t0,$0,0
for_i:
beq $t0,$s0,done_i
addu $s1,$s1,$t0
addu $a0,$t0,$0
jalr $t9,$s3
addu $t0,$v0,$0
beq $0,$0,for_i
done_i:
sw $s1,($t2)
addu $t2,$t2,$t4
addu $s0,$s0,$t1
j start
ori $t1,$0,1
addu $v0,$a0,$t1
jr $t9
