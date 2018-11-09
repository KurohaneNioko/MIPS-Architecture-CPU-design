.data
fib:.space 12000 
.text
#subu冲突（可代表ori，lui和addu）
ori $2,$0,0x3014 #$2=0x3014    1
subu $1,$2,$3  #$1=0x3014
jr $1          #(暂停1T)
nop
addu $4,$1,$0  #不执行
addu $3,$1,$0  #$3=0x3014 跳转到这一条
nop
nop
nop
lui $4,0x1111  #$4=0x1111     2
subu $1,$2,$3  #$1=0
beq $1,$0,loop #跳转(暂停1T)
nop
addu $5,$1,$4  #不执行
loop:
addu $6,$1,$4  #$6=0x11110000 跳转到这一条
nop
nop
nop
lui $7,0x1111  #$7=0x1111      3
subu $1,$2,$3  #$1=0
beq $0,$1,loop1 #跳转(暂停1T)
nop
addu $7,$1,$7  #不执行
loop1:
addu $5,$1,$7  #$5=0x11110000 跳转到这一条
nop
nop
lui $7,0x1111  #$7=0x11110000        4
subu $1,$2,$3  #$1=0
beq $1,$0,loop2 #跳转(暂停1T)
nop
addu $7,$1,$7  #不执行
loop2:
addu $5,$1,$7  #$5=0x11110000 跳转到这一条
nop
nop
subu $8,$5,$6 #$8=0  rs冲突      5
addu $9,$8,$7 #$9=0x11110000
nop
nop
nop
subu $10,$9,$8  #$10=0x11110000 rt冲突    6
addu $11,$9,$10 #$11=0x22220000
nop
nop
nop
subu $12,$11,$0 #$12=0x22220000 rs冲突
ori $13,$12,1   #13=0x22220001 
nop
nop
nop
subu $14,$13,$0  #$14=0x22220001       7
sw $14,0($0)     #*00000000=0x22220001
nop
nop
nop
subu $15,$14,$12 #$15=1         8
nop
addu $16,$15,$0  #$16=1
nop
nop
nop
subu $17,$16,$0  #$17=1         9
nop   	
addu $18,$0,$17  #$18=1
nop
nop
nop
subu $19,$18,$17 #$19=0         10
nop	
ori $20,$19,0x1000  #$20=0x1000
nop
nop
nop
subu $21,$20,$0  #开始隔两条 $21=0x1000   11	
nop	
nop	
addu $22,$21,$0 #$22=0x1000     
nop
nop
nop
subu $23,$22,$20 #$23=0	     12
nop	
nop	
ori $24,$23,0x1001 #$24=0x1001  
nop
nop
nop
subu $25,$24,$0  #$25=0x1001       13
nop	
nop	
beq $25,$0,loop3 #不跳转
nop
addu $26,$25,$24 #$26=0x2002
loop3:
addu $27,$26,$25 #$27=0x3003
nop
nop
nop
ori $28,$0,0x31a4  #$28=0x31a4      14
subu $29,$28,$0    #$29=0x31a4	 
nop	
nop	
jr $29
nop
addu $30,$29,$25 #不执行
addu $30,$29,$0 #0x31a4 $30=0x31a4
nop
nop
nop
ori $2,$0,1        #$2=1            15
ori $3,$0,5        #$3=5
subu $1,$3,$2      #$1=4	
nop	
nop	
sw $3,0($1)     #*00000004=5
nop
nop
nop
subu $1,$3,$2   #$1=4	         16
nop	
nop	
lw $4,0($1)     #$4=5
nop
nop
nop
subu $1,$3,$2   #$1=4	        17
nop
nop		
addu $4,$2,$1   #$4=5
nop
nop
nop
ori $2,$0,0      #$2=0
subu $1,$2,$0    #$1=0          18
nop
nop	
beq $0,$1,loop4  #跳转
nop
addu $1,$1,$1    #不执行
loop4:
subu $1,$1,$1    #$1=0
nop
nop
nop
addu $3,$0,1    #$3=1
addu $2,$0,2    #$2=2
subu $1,$2,$3  #$1=1	
nop	
nop	
sw $1,0($0)    #*00000000=1
nop
nop
#lw冲突
ori $1,$0,0x3284  #$1=0x3284
sw $1,0($0)       #*00000000=0x3284
lw $1,0($0)	      #$1=0x3284
jr $1	      #跳转（暂停2T）
nop	
addu $2,$1,$0    #不执行
subu $3,$1,$0    #0x3284 $3=0x3284
nop
nop
nop
lw $1,0($0)	     #$1=0x3284
beq $0,$1,loop5  #不跳转（暂停2T）
nop	
subu $2,$1,$0    #$2=0x3284
loop5:
addu $3,$1,$0    #$3=0x3284
nop
nop
nop
lw $1,8($0)	      #$1=0
beq $1,$0,loop6   #跳转（暂停2T）	
nop	
addu $2,$1,$0     #不执行$2=0
loop6:
addu $3,$1,$0     #$3=0
nop
nop
nop
lw $1,0($0)	     #$1=0x3284
addu $4,$1,$3    #$4=0x3284（暂停1T）
nop
nop
nop		
lw $1,0($0)	     #$1=0x3284
ori $2,$1,4      #$2=0x3284（暂停1T）
nop
nop
nop	
ori $31,$0,4    #$31=4
sw $31,0($0)    #*00000000=4
sw $1,0($31)    #*00000004=0x3284	
lw $1,0($0)	    #$1=4
lw $2,0($1)	    #$2=0x3284（暂停1T）
nop
nop
nop
lw $1,0($0)	    #$1=4
sw $0,0($1)	    #*00000004=0（暂停1T）
nop
nop
nop	
lw $1,0($0)	   #$1=4
subu $4,$2,$1  #$4=0x3280（暂停1T）
nop
nop
ori $2,$0,0x335c #$2=0x335c
sw $2,0($0)      #*00000000=0x335c  		
lw $1,0($0)	     #$1=0x335c
nop	
jr $1            #跳转（暂停1T）
nop
addu $30,$1,$0  #不执行
addu $31,$1,$0  #$31=0x335c
nop
nop
nop
lw $1,0($0)	    #$1=0x335c
nop	
beq $0,$1,loop7  #不跳转 （暂停1T）	
nop
addu $2,$1,$0   #$2=0x335c
loop7:
addu $3,$1,$0   #$3=0x335c
nop
nop
nop
lw $1,0($0)	      #$1=0x335c
nop	
beq $1,$0,loop8   #不跳转（暂停1T）	
nop
addu $2,$1,$0   #$2=0x335c
loop8:
addu $3,$1,$0   #$3=0x335c
nop
nop
nop
ori $2,$0,1     #$2=1
lw $1,0($0)	    #$1=0x335c
nop
addu $4,$1,$2  #$4=0x335d
nop
nop
nop	
lw $1,0($0)	   #$1=0x335c
nop
addu $4,$2,$1  #$4=0x335d
nop
nop
nop	
lw $1,0($0)	    #$1=0x335c
nop	
ori $2,$1,1     #$2=0x335d
nop
nop
nop	
lw $1,0($0)	    #$1=0x335c
sw $1,0($0)	    #*00000000=0x335c
nop
nop
nop
lw $1,0($0)	   #$1=0x335c
nop	
nop	
addu $4,$1,$0  #$4=0x335c  
nop
nop
nop
lw $1,0($0)	  #$1=0x335c
nop	
nop	
ori $2,$1,2   #$2=0x335e
nop
nop
nop
lw $1,12($0)   #$1=0
nop	
nop	
beq $1,$0,loop9  #跳转
nop
addu $2,$1,$0   #不执行
loop9:
addu $3,$1,$0   #$3=0
nop
nop
nop
ori $2,$0,0x3494   #$2=0x3494
sw $2,0($0)        #*00000000=0x3494
lw $1,0($0)	       #$1=0x3494
nop	
nop
jr $1   #跳转
nop
addu $2,$1,$0     #不执行
addu $3,$1,$0     #$3=0x3494
nop
nop
nop
#jal冲突
jal loop10	     #$31=0x34ac
nop	
loop10:
beq $31,$31,loop11  #跳转	
nop
addu $2,$1,$0    #不执行
loop11:
addu $1,$1,$0   #$1=0x3494
nop
nop
nop
jal loop12	     #$31=0x34d0
nop	
j loop13
nop
loop12:
jr $31	
nop
loop13:
addu $2,$1,$0   #$2=0x3494
nop
nop
nop
jal loop14	     #$31=0x34f8
nop	
loop14:
addu $4,$31,$0   #$31=0x34f8
nop
nop
nop	
jal loop15	     #$31=0x3510
nop	
loop15:
ori $2,$31,1000  #$2=0x37f8
nop
nop
nop		
jal loop16	      #$31=0x3528
nop	
loop16:
addu $4,$0,$31    #$4=0x3528
nop
nop
nop	
jal loop17	   #$31=0x3540
nop	
loop17:
sw $31,0($0)   #*00000000=0x3540
nop
nop
nop	
jal loop18	#$31=0x3558
nop	
nop
subu $1,$1,$1    #$1=0
j loop19
nop
loop18:	
jr $31
nop
subu $2,$2,$2   #不执行
loop19:
addu $1,$1,$1   #$1=0
nop
nop
nop
jal loop20	 #$31=0x358c
nop	
nop
loop20:	
beq $31,$0,loop21  #不跳转
nop
addu $2,$2,$2    #$2=0x6ff0
loop21:
addu $3,$1,$0   #$3=0
nop
nop
nop
jal loop22	  #$31=0x35b4
nop	
nop	
loop22:
beq $0,$31,loop23   #不跳转
nop
addu $1,$1,$1   #$1=0
loop23:
addu $2,$1,$1   #$2=0
nop
nop
nop
jal loop24	  #$31=0x35dc
nop	
nop	
loop24:
addu $4,$31,$0  #$4=0x35dc
nop
nop
nop
jal loop25	 #$31=0x35f8
nop	
nop	
loop25:
ori $2,$31,1  #$2=0x35f9
nop
nop
nop
jal loop26	  #$31=0x3614
nop	
nop	
loop26:
subu $4,$0,$31 #$4=0xffffc9ec
nop
nop
nop
jal loop27	#$31=0x3630
nop	
nop	
loop27:
sw $31,4092($0)  #*00000ffc=0x3630
nop
nop
nop
#综合测试
lui $1,0x1111      #$1=0x11110000
ori $1,$1,0x2222   #$1=0x11112222
ori $2,$1,0x1111   #$2=0x11113333
lui $2,0x1234      #$2=0x12340000
addu $2,$3,$1      #$2=0x11112222
subu $3,$1,$2      #$3=0
ori $2,$0,4        #$2=4
sw $2,0($0)        #*00000000=4
lw $1,0($0)        #$1=4
sw $3,0($1)        #*00000004=0
sw $3,0($3)        #*00000000=0
ori $1,$3,3        #$1=3
addu $1,$1,$3      #$1=3
subu $3,$2,$1      #$3=1
subu $2,$3,$1      #$2=0xfffffffe
jal loop28         #$31=0x3688
addu $2,$1,$2      #$2=1
subu $4,$31,$0     #之后执行 $4=0x3688
j loop29
nop 
loop28:
jr $31
nop
loop29:
ori $31,$0,0        #$31=0
beq $31,$0,loop30   #跳转（暂停1T）
nop
addu $31,$31,$31    #不执行
loop30:
addu $31,$1,$2     #$31=4
sw $31,2048($0)    #*00000800=4
lw $30,2048($0)    #$30=4
nop
nop
nop
#jalr冲突测试
ori $31,$0,0x36d4
ori $30,$0,0
jalr $30,$31	
nop	
beq $30,$0,loop31	
nop
and $2,$1,$3       #执行
loop31:
and $3,$1,$2
nop
nop
nop
ori $29,$0,0x3700
or $28,$0,$0
jalr $28,$29	
nop	
bne $0,$28,loop32	
nop
and $2,$1,$3       #不执行
loop32:
and $3,$1,$2
nop
nop
nop
ori $31,$0,0x3728
jalr $20,$31	
nop	
loop33:
beq $20,$31,loop33    #jalr的目标 第一步自己跳自己
addi $20,$20,0x4
nop
nop
nop
ori $30,$0,0x3748
jalr $31,$30	
nop	
addu $4,$31,$0
nop
nop
nop
ori $30,$0,0x3764
jalr $31,$30	
nop	
ori $2,$31,1000
nop
nop
nop
#ori $31,$0,0x3778  隔着jalr跳冲突 不可能 因为是跳自己
#jalr $30,$31	
#nop	
#jalr $31,$30
ori $30,$0,0x3780	
jalr $31,$30	
nop	
xori $30,$31,0xa333
nop
nop
nop	
ori $30,$0,0x379c
jalr $31,$30	
nop	
addu $4,$0,$31
nop
nop
nop
ori $30,$0,0x37b8
jalr $31,$30	
nop	
sw $31,0($0)	
nop
nop
nop
ori $30,$0,0x37d8
jalr $31,$30	
nop	
j loop34	     #2
jalr $1,$31           #1
loop34:
subu $3,$2,$1   #3
nop
nop
nop
ori $31,$0,0
ori $30,$0,0x37fc
jalr $31,$30	
nop	
nop	
bne $31,$0,loop35
andi $31,$2,123
addi $5,$31,213   #不执行
loop35:
andi $4,$2,321
nop
nop
nop
ori $31,$0,0
ori $30,$0,0x382c
jalr $31,$30	
nop	
nop	
bne $0,$31,loop36
andi $31,$2,123
addi $5,$31,213   #不执行
loop36:
andi $4,$2,321
nop
nop
nop
ori $30,$0,0x3858
jalr $31,$30	
nop	
nop	
addu $4,$31,$0
nop
nop
nop
ori $30,$0,0x3878
jalr $31,$30	
nop	
nop	
ori $2,$31,1000
nop
nop
nop
ori $31,$0,0x3898
jalr $30,$31	
nop	
nop	
andi $2,$31,1000
nop
nop
nop
ori $31,$0,0x38b8
jalr $30,$31	
nop	
nop	
nor $20,$0,$31
nop
nop
nop
ori $30,$0,0x38d8
jalr $31,$30
nop	
nop	
subu $4,$0,$31
nop
nop
nop
ori $30,$0,0x38f0
jalr $31,$30	
nop	
nop	
sw $31,0($0)
nop
nop
nop
mult $1,$2	
mflo $2	
nop
nop
nop
mult $1,$2	
mflo $2	
nop	
nop
nop
mult $1,$2	
multu $3,$4	
nop	
nop
nop
mult $1,$2	
divu $3,$4	
nop	
nop
nop
multu $1,$2	
add $3,$1,$2	
nop	
nop
nop
multu $1,$2	
mthi $1	
nop	
nop
nop
multu $1,$2	
mtlo $1	
nop	
nop
nop
div $1,$2	
mfhi $2	
nop	
nop
nop
div $1,$2	
mflo $2	
nop	
nop
nop
div $1,$2	
multu $3,$4	
nop	
nop
nop
divu $1,$2	
div $3,$4	
nop
nop
nop	
divu $1,$2	
add $3,$1,$2	
nop	
nop
nop
divu $1,$2	
mthi $1	
nop
nop
nop	
divu $1,$2	
mtlo $2	
nop	
nop
nop
mfhi $2	
mthi $2	
nop	
nop
nop
mflo $2	
mthi $2	
nop	
nop
nop
mfhi $2	
multu $3,$2	
nop	
nop
nop
mflo $2	
div $2,$4	
nop	
nop
nop
mflo $2	
xor $3,$1,$2
nop	
nop
nop
mflo $2	
sltiu $3,$2,100	
nop	
nop
nop
mflo $2	
nop	
sll $3,$2,6
nop
nop
nop
mflo $2	
nop	
nop	
and $2,$1,$2
nop
nop
nop
ori $3,$0,0x3ae0
mtlo $3
mflo $2	
jalr $1,$2	
nop	
addiu $6,$1,3  #不执行
addiu $9,$1,4
nop
nop
nop
mflo $2	
beq $0,$2,loop37	
nop	
addiu $6,$1,3  #执行
loop37:
addiu $9,$1,4
nop
nop
nop
ori $3,$0,0x100
sub $3,$0,$3
mtlo $3
mflo $2	
bltz $2,loop38
nop	
addiu $6,$1,3  #不执行
loop38:
addiu $9,$1,4
nop
nop
nop
lb $1,1($0)	
mult $2,$1	
nop	
nop
nop
lb $2,2($0)
lb $1,2($0)	
beq $1,$2,loop39	
nop	
addiu $6,$1,3  #不执行
loop39:
addiu $9,$1,4
nop
nop
nop
lb $1,3($0)	
addu $4,$1,$2
nop
nop
nop	
lbu $1,4($0)	
sltiu $2,$1,555
nop
nop
nop	
ori $19,$0,0x3ffc
sw $19,0($0)
lbu $1,0($0)	
lw $19,0($1)	
nop
nop
nop	
lbu $1,0($0)	
sw $1,0($1)	
nop
nop
nop	
lbu $1,0($0)	
div $2,$1	
nop
nop	
nop
ori $29,$0,0x3bfc
sh $29,0($0)
lh $1,0($0)	
nop	
jr $1	
nop
addiu $6,$1,3  #不执行
loop40:
addiu $9,$1,4
nop
nop
nop
lh $1,2902($0)	
nop	
bgtz $1,loop41	
nop
addiu $6,$1,3  #执行
loop41:
addiu $9,$1,4
nop
nop
nop
lh $1,0($0)	
nop	
blez $1,loop42	
nop
addiu $6,$1,3  #执行
loop42:
addiu $9,$1,4
nop
nop
nop
lh $1,0($0)	
nop	
addu $4,$1,$2
nop
nop
nop	
lhu $1,0($0)	
nop	
addu $4,$2,$1
nop
nop
nop
lhu $1,0($0)	
nop	
ori $2,$1,1000	
nop
nop
nop
lhu $1,0($0)	
sw $1,0($0)	
nop
nop
nop
lhu $1,0($0)	
nop	
nop	
addu $4,$1,$2
nop
nop
nop
lhu $1,0($0)	
nop	
nop	
xori $2,$1,1000
nop
nop
nop
subu $1,$0,$2
lb $1,0($0)	
nop	
nop	
bgez $1,loop43
addiu $6,$1,3  #不执行
loop43:
addiu $9,$1,4
nop
nop
nop
ori $3,$0,0x3d2c
sw $3,0($0)
lh $1,0($0)	
nop	
nop	
jr $1
addiu $6,$1,3  #不执行
loop44:
addiu $9,$1,4
nop
nop
nop
ori $2,$0,0x2fec
sh $2,0($0)
lbu $1,0($0)	
nop	
nop	
lh $2,2($1)
nop
nop
nop
lh $1,0($0)	
nop	
nop	
sh $0,2($1)
nop
nop
nop
lh $1,0($0)	
nop	
nop	
sub $4,$2,$1
nop
nop
nop
xor $1,$0,$0
lhu $1,0($0)	
nop	
nop	
bne $0,$1,loop45
addiu $6,$1,3  #不执行
loop45:
addiu $9,$1,4
nop
nop
nop
lhu $1,0($0)	
nop	
nop	
sb $1,1($0)
nop
nop
nop
nop
lui $2,0x3df8
ori $3,$0,16
srlv $1,$2,$3	
jr $1	
nop	
addiu $6,$1,3  #不执行
loop46:
addiu $9,$1,4
nop
nop
nop
srlv $1,$2,$3	
beq $0,$1,loop47	
nop	
addiu $6,$1,3  #执行
loop47:
addiu $9,$1,4
nop
nop
nop
sub $1,$0,$2
srlv $1,$2,$3	
bltz $1,loop48	
nop	
addiu $6,$1,3  #执行
loop48:
addiu $9,$1,4
nop
nop
nop
srlv $1,$2,$3	
mthi $1		
nop
nop
nop
sra $1,$2,5	
and $4,$2,$1
nop
nop
nop		
sra $1,$2,5	
andi $2,$1,6666
nop
nop
nop	
sra $1,$2,5	
nop	
srav $4,$1,$2	
nop
nop
nop
sra $1,$2,13	
nop	
srlv $4,$2,$1	
nop
nop
nop
sllv $1,$2,$3	
nop	
mtlo $1	
nop
nop
nop
sllv $1,$2,$3	
sb $1,0($0)		
nop
nop
nop
sllv $1,$2,$3	
nop	
nop	
nor $4,$1,$2
nop
nop
nop
sllv $1,$2,$3	
nop	
nop	
xori $2,$1,8778
nop
nop
nop
ori $3,$0,5
sub $1,$0,$2
slt $1,$1,$3	
nop
blez $1,loop50
addiu $6,$1,3  #执行
loop50:
addiu $9,$1,4
nop
nop
nop
slt $1,$2,$3	
nop	
nop	
lbu $0,0($1)
nop
nop
nop
slt $1,$2,$3	
nop	
nop	
sh $0,0($1)
nop
nop
nop
slti $1,$2,-100	
nop	
nop	
subu $4,$2,$1
nop
nop
nop
or $1,$0,$0
ori $2,$0,99
slti $1,$2,100	
nop	
nop	
bne $0,$1,loop51
nop
addiu $6,$1,3  #不执行
loop51:
addiu $9,$1,4
nop
nop
nop
slti $1,$2,-1000	
nop	
nop	
sw $1,0($0) #存0
nop
nop
nop
slti $1,$2,1000	
nop	
nop	
sw $1,0($0)  #存1
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





