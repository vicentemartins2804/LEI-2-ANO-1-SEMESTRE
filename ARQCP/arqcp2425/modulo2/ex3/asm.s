.section .data
    .global op1
    .global op2

.section .text
    .global sum              # Declare `sum` as a global function

CONST = 20                   # Define a constant, CONST, with value 20

# Function: sum
# Purpose: Computes the sum of `op1` and `op2`
sum:
    movl op1(%rip), %ecx     # Load the value of `op1` into the ECX register
    movl op2(%rip), %eax     # Load the value of `op2` into the EAX register
    addl %ecx, %eax          # Add ECX to EAX, result now in EAX
    ret                      # Return the result (in EAX) to caller

.global another_sum          # Declare `another_sum` as a global function

# Function: another_sum
# Purpose: Computes (CONST - op1) + (CONST - op2) + CONST
another_sum:
    movl $CONST, %eax        # Load the constant `CONST` (20) into the EAX register
    subl op1(%rip), %eax     # Subtract `op1` from `CONST`, result stored in EAX

    movl $CONST, %ecx        # Load `CONST` (20) into the ECX register
    subl op2(%rip), %ecx     # Subtract `op2` from `CONST`, result stored in ECX

    addl %ecx, %eax          # Add (CONST - op2) in ECX to (CONST - op1) in EAX
    addl $CONST, %eax        # Add `CONST` to the result in EAX
    ret                      # Return the final result in EAX
