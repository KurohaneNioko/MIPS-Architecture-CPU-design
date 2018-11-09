#judge leap year
.text
    li		$v0,  2000		# $v0 = 5 
               # read year number in $v0
    #if( (year % 4 == 0) && (year % 100 != 0) ) || (year % 400 == 0) ) 1 else 0
    li		$s1,  4		# $s1 = 4 
    div     $v0, $s1
    mfhi    $t0         # $t0 = year % 4
    bne		$t0, $0, NotLeapYear	# if $t0 !=0 NotLeapYear
    li		$s1, 100	# $s1 = 100
    mflo    $t0        	# $t0 = year / 4
    div		$t0, $s1	# $t0 / 100
    mfhi	$t0
    beq		$t0, $0, IsLeapYear     # if year / 4 % 100 ==0 then 1
    div		$v0, $s1	# $t0 / 100
    mfhi	$t0
    bne		$t0, $0, IsLeapYear	# year % 100 != 0 IsLeapYear
    j		NotLeapYear
IsLeapYear:
    li		$v0,  1		# $v0 = 1 (print int )
    la      $a0,  1     # IsLeapYear->print 1
    syscall
    j End
NotLeapYear:
    li		$v0,  1		# $v0 = 1 (print int )
    la     	$a0,  0     # NotLeapYear->print 0
    syscall
End:
    nop
