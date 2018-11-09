lui $s0,0xffff
lui $s3,0x1234
ori $s2,$s2,1234
div $s3,$s2
mfhi $t1
add $t9,$t1,$t1
mflo $t2
add $t5,$t5,$t5
div $s3,$s2
add $t4,$s2,$s2
nop
add $t4,$t4,$t4
add $t4,$t4,$t4
nop
nop
add $t4,$t4,$t4
add $t4,$t4,$t4
nop
mfhi $t1
div $s3,$s2
mult $t1,$t2
mflo $t9
addu $t9,$t9,$t9
nop
mflo $t9
nop
addu $t9,$t9,$t9
mflo $t9
nop
nop
addu $t9,$t9,$t9