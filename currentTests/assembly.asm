.text
.text
.globl f
f:
addi sp,sp,-68
sw ra,64(sp)
sw s0,60(sp)
sw s1,56(sp)
sw s2,52(sp)
sw s3,48(sp)
sw s4,44(sp)
sw s5,40(sp)
sw s6,36(sp)
sw s7,32(sp)
sw s8,28(sp)
sw s9,24(sp)
sw s10,20(sp)
sw s11,16(sp)
addi s0,sp,68
li t6,4
j return0
return0:
mv a0,t6
lw ra,64(sp)
lw s0,60(sp)
lw s1,56(sp)
lw s2,52(sp)
lw s3,48(sp)
lw s4,44(sp)
lw s5,40(sp)
lw s6,36(sp)
lw s7,32(sp)
lw s8,28(sp)
lw s9,24(sp)
lw s10,20(sp)
lw s11,16(sp)
addi sp,sp,68
jr ra

