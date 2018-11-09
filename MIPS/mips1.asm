# *($a0) = a
# *($a1) = b
# return value in $v0
# return addr in $ra
func:
        blez    $a1, L7 # b<=0 then to L7
        nop
L3:     #a %= b
        div     $a0,$a1
        bne		$a1, $0, L1	# if a !=0 then jump to L1
        nop
L1:
        mfhi    $a0
        xor     $a0,$a0,$a1 #a ^= b
        xor     $a1,$a1,$a0 #b ^= a
        xor     $a0,$a1,$a0 #a ^= b
        bgtz    $a1,L3      #if b > 0 loop
        nop
L7:
        move    $v0,$a0
        j		$ra				# jump to $ra
        nop
        