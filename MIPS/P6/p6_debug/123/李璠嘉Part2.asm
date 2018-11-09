####  $t for oprand $s for result
li $t0, 0x7fffffff #greatest positive num
li $t1, 0xffffffff #least negative num
li $t2, 0x80000000 #greatest negative num

##test on mult and multu

#by themselves
mult $t0, $t0
mfhi $s0
mflo $s1
multu $t0, $t0
mfhi $s2
mfhi $s3

mult $t1, $t1
mfhi $s4
mflo $s5
multu $t1, $t1
mfhi $s6
mflo $s7

mult $t2, $t2
mfhi $s0
mflo $s1
multu $t2, $t2
mfhi $s2
mflo $s3

#combination of the three nums
mult $t0, $t1
mfhi $s0
mflo $s1
multu $t0, $t1
mfhi $s2
mflo $s3
mult $t0, $t2
mfhi $s4
mflo $s5
multu $t0, $t2
mfhi $s6
mflo $s7
mult $t1, $t2
mfhi $s0
mflo $s1
multu $t1, $t2
mfhi $s2
mflo $s3
#about 0
mult $0, $t1
mfhi $s2
mflo $s3

multu $t1, $0
mfhi $s4
mflo $s5

##test on div and divu

#by themselves
div $t0, $t0
mfhi $s0
mflo $s1

divu $t0, $t0
mfhi $s2
mflo $s3

div $t1, $t1
mfhi $s4
mflo $s5

divu $t1, $t1
mfhi $s6
mflo $s7

div $t2, $t2
mfhi $s0
mflo $s1

divu $t2, $t2
mfhi $s2
mflo $s3

#combination
div $t0, $t1
mfhi $s0
mflo $s1

div $t1, $t0
mfhi $s2
mflo $s3

divu $t0, $t1
mfhi $s4
mflo $s5

divu $t1, $t0
mfhi $s6
mflo $s7

div $t0, $t2
mfhi $s0
mflo $s1

div $t2, $t0
mfhi $s2
mfhi $s3

divu $t0, $t2
mfhi $s4
mflo $s5

divu $t2, $t0
mfhi $s6
mflo $s7

div $t1, $t2
mfhi $s0
mflo $s1

div $t2, $t1
mfhi $s2
mflo $s3

divu $t1, $t2
mfhi $s4
mflo $s5

divu $t2, $t1
mfhi $s6
mflo $s7

#about 0
div $0, $t1
mfhi $s0
mflo $s1

divu $0, $t1
mfhi $s0
mflo $s1

###PART II hazard test on mf mt

ori $t1, 1234
## rtype-mt 
add $t0, $0, $t1
mthi $t0
mtlo $t0
mfhi $s0
mflo $s1

add $t0, $0, $t1
mtlo $t0
mthi $t0
mfhi $s2
mflo $s3

ori $t0 $0, 423
nop
mthi $t0
mtlo $t1
mfhi $s4
mflo $s5

ori $t0, $0, 8765
nop
nop
mthi $t0
mtlo $t0
mflo $s6
mfhi $s7

ori $t0, $0, 6543
nop
nop
nop
mthi $t0
mtlo $t0
mflo $s0
mfhi $s1

#l - mt
