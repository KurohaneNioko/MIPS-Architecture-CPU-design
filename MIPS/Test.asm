lui $t0,0xff88
lui $t1 0xfa24
subu $t2 $t0 $t1
ori $t3 $t2 0x1b62
lui $t4 0xfa23
jj:
sll $s0 $t3, 7
sllv $s1 $t3 $t3
sra $s2 $t1 3
sra $s3 $t3 5
srav $s4 $t3 $t3
srav $s5 $t1 $t3
srl $s6 $t0 12
srl $s7 $t0 9
b jj
nop

