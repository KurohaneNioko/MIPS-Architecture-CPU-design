lui	$10, 15
addu $20, $9, $9
subu $9, $9, $20
jal func
addu  $20,$10,$10

func:
lui	$9, 15
addu $20, $9, $9
subu $20, $9, $20
jr   $ra