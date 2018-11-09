.data 0x00001000
str: .asciiz "hello world"
num: .byte 1,2,3,4,5,6,7,8
str3: .ascii "world"
.text
la $a0, str #
li $v0, 4 #
syscall