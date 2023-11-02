.text
.globl g
g:
addi sp,sp,-72
sw ra,68(sp)
sw s0,64(sp)
sw s1,60(sp)
sw s2,56(sp)
sw s3,52(sp)
sw s4,48(sp)
sw s5,44(sp)
sw s6,40(sp)
sw s7,36(sp)
sw s8,32(sp)
sw s9,28(sp)
sw s10,24(sp)
sw s11,20(sp)
addi s0,sp,72
sw a0,-64(s0)
li t4,0
sw t4,-68(s0)
startswitch1:
lw t4,-64(s0)
li a4,0
bne a4,t4,end3
li t5,1
sw t5,-68(s0)
end3:
j endswitch2
li a4,2
bne a4,t4,end4
li t5,2
sw t5,-68(s0)
end4:
li a4,1
bne a4,t4,end5
lw t5,-68(s0)
li s7,1
add t5,t5,s7
sw t5,-68(s0)
end5:
j endswitch2
lw a6,-64(s0)
li t5,1
add a6,a6,t5
sw a6,-68(s0)
endswitch2:
lw t6,-68(s0)
j return0
return0:
mv a0,t6
lw ra,68(sp)
lw s0,64(sp)
lw s1,60(sp)
lw s2,56(sp)
lw s3,52(sp)
lw s4,48(sp)
lw s5,44(sp)
lw s6,40(sp)
lw s7,36(sp)
lw s8,32(sp)
lw s9,28(sp)
lw s10,24(sp)
lw s11,20(sp)
addi sp,sp,72
jr ra
