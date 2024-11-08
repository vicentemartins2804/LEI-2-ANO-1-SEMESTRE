.section .data
    .global op1
    .global op2
    .global op3
    .global op4
    
op3:
    .quad 0               # Declare op3 as a quad (64-bit integer)
op4:
    .quad 0               # Declare op4 as a quad (64-bit integer)

.section .text
    .global sum              # Declare `sum` as a global function

CONST = 20                   # Define a constant, CONST, with value 20


sum:
    movl op1(%rip), %ecx     # Load the value of `op1` into the ECX register
    movl op2(%rip), %eax     # Load the value of `op2` into the EAX register
    addl %ecx, %eax          # Add ECX to EAX, result now in EAX
    ret                      # Return the result (in EAX) to caller

.global another_sum          # Declare `another_sum` as a global function

another_sum:
    movl $CONST, %eax        # Load the constant `CONST` (20) into the EAX register
    subl op1(%rip), %eax     # Subtract `op1` from `CONST`, result stored in EAX

    movl $CONST, %ecx        # Load `CONST` (20) into the ECX register
    subl op2(%rip), %ecx     # Subtract `op2` from `CONST`, result stored in ECX

    addl %ecx, %eax          # Add (CONST - op2) in ECX to (CONST - op1) in EAX
    addl $CONST, %eax        # Add `CONST` to the result in EAX
    ret                      # Return the final result in EAX

.global yet_another_sum

yet_another_sum:
    movq op4(%rip), %rax
		movslq op1(%rip), %rdx
		movslq op2(%rip), %rcx
		addq op3(%rip), %rax
		subq %rcx, %rax
		subq %rcx, %rax
		addq %rdx, %rax
		subq op4(%rip), %rax
		ret
