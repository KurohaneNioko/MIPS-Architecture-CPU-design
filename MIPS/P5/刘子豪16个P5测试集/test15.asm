ori $t0, $0, -1234
bltz $t0, loop
nop
ori $s0, $0, 1
loop:
ori $s0, $0, 2
ori $t1, $0, -6
nop
bltz $t1, loop2
nop
ori $s0, $0, 1
loop2:
ori $s0, $0, 3
ori $t2, $0, -7
nop
nop
bltz $t2, loop3
nop
ori $s0, $0, 1
loop3:
ori $s0, $0, 4
ori $t3, $0, -8
nop
nop
nop
bltz $t3, loop4
nop
ori $s0, $0, 1
loop4:
 ori $t3, $0, 5

