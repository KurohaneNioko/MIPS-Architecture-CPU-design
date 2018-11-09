.text
#init
li $t0, 125
li $t1, 0
li $t2, -100
li $s0, 1255
li $s1, 0
li $s2, -1006
#init_end

a1:
mult  $t0, $s0
multu $t0, $s0
div   $t0, $s0
divu  $t0, $s0
nop
j a2
nop

a2:
sll   $s5,$t0,5
srl   $s5,$t0,5
sra   $s5,$t0,5
addu  $s5,$t0,$s0
subu  $s5,$t0,$s0
sllv  $s5,$t0,$s0
srlv  $s5,$t0,$s0
srav  $s5,$t0,$s0
and   $s5,$t0,$s0
or    $s5,$t0,$s0
xor   $s5,$t0,$s0
nor   $s5,$t0,$s0
slt   $s5,$t0, $s0
sltu  $s5,$t0, $s0
jal a3
nop

a3:
mfhi  $s5
mflo  $s5
mthi  $s5
mtlo  $s5
sb    $t0, 2($0)
sh    $t0, 4($0)
sw    $t0, 0($0)
lb    $t0, 1($0)
lbu   $t0, 2($0)
lh    $t0, 6($0)
lhu   $t0, 8($0)
lw    $t0, 0($0)

a4:
addiu $s5, $s0,1
andi  $s5, $s0,1
ori   $s5, $s0,1
xori  $s5, $s0,1
lui   $s5, 0x5655
slti  $s5, $s0,1
sltiu $s5, $s0,1

a5:
li $t0, 1
li $t1, -1
beq  $t0, $t1, a3 
nop
li $t0, -1
li $t1, -1
bne  $t0, $t1, a3
nop
li $t0, -1
li $t1, 1
blez  $t1, a3
nop

bgtz  $t0,  a3
nop

bltz  $t1, a3
nop

end:bgez  $t1, end
nop
