f:
addi sp,sp -20
sw ra 16(sp)
sw s0 12(sp)
addi s0,sp,20

li t4,5
mv a0, t4
lw s0,12(sp)
addi sp,sp,20

jr ra