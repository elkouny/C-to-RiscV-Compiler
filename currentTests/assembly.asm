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
sw a0,-64(s0) #-64 has add of p
lw t4,-64(s0) #t4 has add of p
li a2,1 
add t4,t4,a2 # add 1 to add of p
sw t4,-64(s0)
UNARY OPlw t4,-64(s0)
lw t6,0(t4)
UNARY OPj return0

a0 = p*
sw a0 -> -64 
int x = 5;


main(x)

int mian(int *p){ addr
    print p
}

Scope Level 1:
Variables:
var: [ p ] type: [ int ] offset [ -64 ]
Enums:
Scope Level 0:
Variables:
Enums:
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

