.text
.text
.globl g
g:
addi sp,sp,-64
sw ra,60(sp)
sw s0,56(sp)
sw s1,52(sp)
sw s2,48(sp)
sw s3,44(sp)
sw s4,40(sp)
sw s5,36(sp)
sw s6,32(sp)
sw s7,28(sp)
sw s8,24(sp)
sw s9,20(sp)
sw s10,16(sp)
sw s11,12(sp)
addi s0,sp,64
li t4,13
li a2,10
add t6,t4,a2
j return0
return0:
mv a0,t6
lw ra,60(sp)
lw s0,56(sp)
lw s1,52(sp)
lw s2,48(sp)
lw s3,44(sp)
lw s4,40(sp)
lw s5,36(sp)
lw s6,32(sp)
lw s7,28(sp)
lw s8,24(sp)
lw s9,20(sp)
lw s10,16(sp)
lw s11,12(sp)
addi sp,sp,64
jr ra

