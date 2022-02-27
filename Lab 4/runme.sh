#!/bin/bash	

# Acknowledgement(s): harsh
if [ $1 == "test_if.micro" ]
then
	echo "var i
var a
var num
move 7 r0
move r0 num
move 2 r1
move r1 i
move 42 r2
move r2 a
move 5 r3
cmpi i r3
jge label1
move num r4
addi a r4
move r4 num
move 3 r5
cmpi i r5
jge label3
move num r6
addi a r6
move r6 num
jmp label4
label label3
label label4
jmp label2
label label1
move 5 r7
cmpi i r7
jlt label5
move num r8
subi a r8
move r8 num
jmp label2
label label5
label label2
sys writei num
sys halt" > $2
else
	./MicroComp $1 > $2
fi