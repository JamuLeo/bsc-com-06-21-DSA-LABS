

.text
.globl main
main:
li $v0,4  #system call for printing a string
la $a0,result1 #load the address of result1 into $a0
syscall #execute the system call

li $v0,1 #system call to print an integer
la $a0,4 #load integer 4 into an address $a0
syscall  #execute the system call


li $v0,4  #system call for printing a string
la $a0,result2 #load the address of result2 into $a0
syscall #execute the system call

li $v0,1 #system call to print an integer
la $a0,8 #load integer 8 into an address $a0
syscall  #execute the system call

addi $v0,$zero,10 #exit program
syscall

.data
result1: .ascii "\nfirst value ="
result2: .ascii "\nsecond  value ="


