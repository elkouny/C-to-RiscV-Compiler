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
li t4,0
sw t4,-64(s0)
startf0:
lw s7,-64(s0)
li s3,10
slt a0,s7,s3
andi a0,a0,0xff
beq a0,zero,endf1
loopf2:
lw s7,-64(s0)
li s3,4
sub a0,s7,s3
seqz a0,a0
andi a0,a0,0xff
beq a0,zero,.L1
j endf1
Scope Level 3:
Variables:
Enums:
Scope Level 2:
Variables:
Enums:
Scope Level 1:
Variables:
var: [ i ] type: [ int ] offset [ -64 ]
Enums:
Scope Level 0:
Variables:
Enums:
.L1:
Scope Level 2:
Variables:
Enums:
Scope Level 1:
Variables:
var: [ i ] type: [ int ] offset [ -64 ]
Enums:
Scope Level 0:
Variables:
Enums:
lw t4,-64(s0)
addi t4,t4,1
sw t4,-64(s0)
beq zero,zero,startf0
endf1:
lw t6,-64(s0)
j return0
Scope Level 1:
Variables:
var: [ i ] type: [ int ] offset [ -64 ]
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

