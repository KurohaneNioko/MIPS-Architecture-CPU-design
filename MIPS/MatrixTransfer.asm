#矩阵转化
#输入1个n乘m的稀疏矩阵A（矩阵每个元素为占一个字的整数）
#将A转化为三元组列表（排列顺序：行号小的在前，如果行号相同则列号小的在前)
#并将三元组列表逆序输出
#输入
#第一行是1个整数n,第二行是1个整数m。接下来的n乘m行每行一个整数，
#矩阵A的第a行，第b列的元素，为上述输入的第(a-1)*m+b个整数
#即一行一行地输入矩阵A的每个元素
#输出
#x行，按照输入顺序的逆序输出x个非0元素的信息：
#每行输出3个整数，依次为矩阵非0元素对应的行数，列数和数值，中间以空格隔开
.data
    elmt: .space 3000
    #place: .space 200
    space: .asciiz " "
    changeline: .asciiz "\n"
.text
    la $sp, elmt    # elmt in Stack Pointer now
    li $v0, 5
    syscall
    move $s0, $v0   # hang in $s0
    li $v0, 5
    syscall
    move $s1, $v0   # lie in $s1
    addi $t0, $0, 1 # current hang
    addi $t1, $0, 1 # current lie
    mult $s0, $s1    
    mflo $t7        # numbers of elmts in $t7
loop:
    li $v0, 5
    syscall
    beq $v0, 0, ChangeLie    # read 0 then ChangeLie
    sw $v0, 0($sp)
    add $sp, $sp, 4
    sw $t1, 0($sp)
    add $sp, $sp, 4
    sw $t0, 0($sp)
    add $sp, $sp, 4 #store elmt, lie, hang
    j ChangeLie
ChangeHang:
    addi $t0, $t0, 1 #increase hang
    addi $t1, $0, 1  #reset lie
    j next
ChangeLie:
    beq $t1, $s1, ChangeHang #if lie full then ChangeHang
    addi $t1, $t1, 1         #else hang++
next:
    addi $t7, $t7, -1   #count rest inputs
    bgtz $t7, loop      #if rest inputs>0 then loop
    la $t7, elmt    # elmt in $t7 now
print:
    add $sp, $sp, -4
    lw $a0, 0($sp)
    li $v0, 1
    syscall         #print hang
    la $a0, space
    li $v0, 4
    syscall         #print space
    add $sp, $sp, -4
    lw $a0, 0($sp)
    li $v0, 1
    syscall         #print lie
    la $a0, space
    li $v0, 4
    syscall         #print space
    add $sp, $sp, -4
    lw $a0, 0($sp)
    li $v0, 1
    syscall         #print elmt
    la $a0, changeline
    li $v0, 4
    syscall         #print \n
    bne $sp, $t7, print