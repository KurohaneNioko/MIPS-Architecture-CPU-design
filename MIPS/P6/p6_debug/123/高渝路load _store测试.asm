lui $t1,0xffff
ori $t0,$t0,3

sll $t1,$t1,3
lui $t1,0xffff
ori $t1,$t1,0x5678
sw $t1,0($s0)
lb $t3,0($0)
sb $t3,8($s0)
lb $t3,1($s0)
sb $t3,9($s0)
lb $t3,2($s0)
sb $t3,10($s0)
lb $t3,3($s0)
sb $t3,11($s0)
lb $t3,4($s0)
sb $t3,12($s0)

lw $s0,20($0)
lbu $t3,0($s0)
sb $t3,8($s0)
lw $s0,20($0)
lbu $t3,1($s0)
lw $s0,20($0)
sb $t3,9($s0)
lw $s0,20($0)
lbu $t3,2($s0)
sb $t3,10($s0)
lw $s0,20($0)
lbu $t3,3($s0)
sb $t3,11($s0)
lw $s0,20($0)
lbu $t3,4($s0)
sb $t3,12($s0)
lw $s0,20($0)
lh $t3,0($s0)
lw $s0,20($0)
lhu $t3,0($s0)
lw $s0,20($0)
lh $t3,2($s0)
lw $s0,20($0)
lhu $t3,2($s0)


sh $t1,4($0)
sb $t1,13($0)

lb $t4,4($0)
addu $t4,$t4,$t4
addu $0,$0,1
lb $0,0($s0)
sh $t1,6($0)



