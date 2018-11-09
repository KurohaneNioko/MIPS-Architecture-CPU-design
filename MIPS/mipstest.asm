	li $a0, 4
fact:
	addi	$sp, $sp, -8
	sw		$ra, 4($sp)
	sw		$a0, 0($sp)
	slti	$t0, $a0, 1
	beq		$t0, $0, L1
	addi	$v0, $0, 1
	addi    $sp, $sp, 8
	jr      $ra
L1:
	addi	$a0, $a0, -1
	jal		fact
	lw		$ra, 4($sp)
	lw		$a0, 0($sp)
	addi	$sp, $sp, 8
	mul		$v0, $a0, $v0
	jr		$ra