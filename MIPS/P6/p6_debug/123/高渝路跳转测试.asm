ori $t0,$t0,0
ori $t1,$t1,1
lui $t2,0xffff
lw $t0,0($0)
beq $t0,$t0,for_1_begin
lui $s0 ,1
lui $s0,2
for_1_begin:
lw $t0,0($0)
beq $t1,$t0,for_1_begin
nop
lw $t0,0($0)
bne $t1,$t0,for_2_begin
lui $s1 ,1
lui $s1,2
for_2_begin:
lw $t0,0($0)
bne $t0,$t0,for_1_begin
nop
bgez $t1,for_3_begin
lui $s1 ,1
lui $s1,2
for_3_begin:
lw $t0,0($0)
bgez $t0,for_4_begin
lui $s1 ,1
lui $s1,2
for_4_begin:
bgez $t2,for_2_begin
nop
bgtz $t1,for_5_begin
lui $s1 ,1
lui $s1,2
for_5_begin:
lw $t0,0($0)
bgtz $t0,for_6_begin
lui $s1 ,1
lui $s1,2
for_6_begin:
bgtz $t2,for_2_begin
nop

blez $t1,for_7_begin
lui $s1 ,1
lui $s1,2
for_7_begin:
lw $t0,0($0)
blez  $t0,for_8_begin
lui $s1 ,1
lui $s1,2
for_8_begin:
blez  $t2,ok
lui $s1,1234
ok:
bltz $t1,for_10_begin
lui $s1 ,1
lui $s1,2
for_10_begin:
lw $t0,0($0)
bltz  $t0,for_11_begin
lui $s1 ,1
lui $s1,2
for_11_begin:
bltz  $t2,pig
lui $s5,6666
lui $s6,7777
pig:

lw $t0,0($0)
ori $t0,$t0,8

jal begin
lui $t6,123
addu $ra,$ra,$t0
jalr $s5,$ra
addu $t6,$t6,$t6
j next
subu $t1,$t2,$t6
lui $s1,1234
next:
j end
ori $t5,$t5,123
begin:
ori $t1,$t1,2
jr $ra
ori $s2,$s2,1


end:
lui $t1,0x1234
