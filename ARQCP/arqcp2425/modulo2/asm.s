.section .data
    .global op1, op2, op3, op4, s1, n1, n2, a, b, c, d, op3ex10, aEx12, bEx12, v1, v2, lenght1, lenght2, height, aEx15, bEx15, cEx15, dEx15, num, number1, number2, operation
    
op3:
    .quad 5	              
op4:
    .quad 3  
     
sa1:
	.word 4660
sa2:
	.word 22136
	
lenght1ex14:
	.long 3
lenght2ex14:
	.long 7
heightex14:
	.long 2


.section .text                

#------------------
# Exercício 1 / 2
#------------------

.global sum           
	
sum:
    movl op1(%rip), %ecx     
    movl op2(%rip), %eax    
    addl %ecx, %eax          
    ret                      

#------------------
# Exercício 3
#------------------

.global another_sum        

	CONST = 20

another_sum:
    movl $CONST, %eax        
    subl op1(%rip), %eax    

    movl $CONST, %ecx       
    subl op2(%rip), %ecx     

    addl %ecx, %eax        
    addl $CONST, %eax       
    ret                      

#------------------
# Exercício 4
#------------------

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

#------------------
# Exercício 5
#------------------
		
.global swapBytes

swapBytes:
	movw s1(%rip), %ax
	movb %ah, %dl
	movb %al, %ah
	movb %dl, %al
	ret

#------------------
# Exercício 6
#------------------
	
.global exchangeBytes

exchangeBytes:
	movw n1(%rip), %ax
	movw n2(%rip), %bx
	
	movb %al, %dl
	movb %bh, %al
	
	addb %dl, %dl
	movb %dl, %ah
	ret
	
#------------------
# Exercício 7
#------------------

.global crossSubBytes

crossSubBytes:
	movw s1(%rip), %ax
	movw s2(%rip), %bx
	
	movb %ah, %dl
	subb %bl, %dl
	
	movb %bh, %cl
	subb %al, %cl
	
	movb %dl, %ah
	movb %cl, %al
	ret

#------------------
# Exercício 8
#------------------

.global crossSubBytespt2

crossSubBytespt2:
	movw sa1(%rip), %ax
	movw sa2(%rip), %bx
	
	movb %ah, %dl
	subb %bl, %dl
	
	movb %bh, %cl
	subb %al, %cl
	
	movb %dl, %ah
	movb %cl, %al
	ret
	
#------------------
# Exercício 9
#------------------

.global sum_and_subtract

sum_and_subtract:
	movl a(%rip), %ebx
	movsbl b(%rip), %ecx
	movswl c(%rip), %eax
	movswl d(%rip), %esi
		
	subl %ebx, %eax
	addl %esi, %eax
	subl %ecx, %eax
		
	movslq %eax, %rax
	ret

#------------------
# Exercício 10
#------------------

.global sum3ints

sum3ints:

	movl op1(%rip), %eax
	movl op2(%rip), %ebx
	movl op3ex10(%rip), %ecx

	addl %eax, %ebx
	addl %ebx, %ecx
	
	movslq %ecx, %rax
	ret

#------------------
# Exercício 11
#------------------

.global verify_flags

verify_flags:
    movw v1(%rip), %ax
    addw v2(%rip), %ax

    jo flags_active
    jb flags_active
    mov $0, %rax          
    ret

flags_active:
    mov $1, %rax
    ret


#------------------
# Exercício 12
#------------------

.global isMultiple

isMultiple:
    movq aEx12(%rip), %rax       
    cqo                           
    idivq bEx12(%rip)             

    movq $0, %rax                
    testq %rdx, %rdx             
    sete %al                     
    ret   
    
#------------------
# Exercício 13
#------------------                      

.global getArea

getArea:
    movswl length1(%rip), %eax
	movswl length2(%rip), %ecx	
	movswl height(%rip),%edx
		
	addl %ecx, %eax				
	mull %edx
						
	movl $2, %esi				
	divl %esi					
	
    ret          
    
#------------------
# Exercício 14
#------------------                      

.global getAreaEx14

getAreaEx14:
    movl lenght1ex14(%rip), %eax     
    movl lenght2ex14(%rip), %ecx      
    movl heightex14(%rip), %edx       

    addl %ecx, %eax                    
    mull %edx                         

    movl $2, %esi                     
    divl %esi                        

    ret                              
          
#------------------
# Exercício 15
#------------------ 

.global compute

compute:
	movl aEx15(%rip), %edx
	movl bEx15(%rip), %ecx
	movl cEx15(%rip), %eax
	movl dEx15(%rip), %esi
	
	cmpl $0, %esi			
	je erro					
	imull %edx, %ecx		
	imull %eax,%edx			
	subl %edx, %ecx		
	movl %ecx, %eax			
	cltd					
	idivl %esi				
	jmp end					
	
erro:
	movl $0, %eax			
end : 
	ret
		
#------------------
# Exercício 16
#------------------

.global steps

steps:
    movq num(%rip), %rax  
	movq $3, %rcx        
	cqo                  
	idivq %rcx
	addq $6, %rax         
	movq $3, %rcx         
	imulq %rcx            
	addq $12, %rax       
	movq num(%rip), %rcx  
	subq %rcx, %rax       
	subq $4, %rax    
	
	ret	

#------------------
# Exercício 16
#------------------

.global calculator

calculator:
	movl operation(%rip), %esi
	
	cmp $1, %esi
	je addition
	
	cmp $2, %esi
	je subtraction
	
	cmp $3, %esi
	je multiplication
	
	cmp $4, %esi
	je division
	
	cmp $5, %esi
	je modulus
	
	cmp $6, %esi
	je power2
	
	cmp $7, %esi
	je power3
	ret
	
addition:
	movl number1(%rip), %eax
	movl number2(%rip), %ebx
	addl %ebx, %eax
	ret

subtraction:
	movl number1(%rip), %eax
	movl number2(%rip), %ebx
	subl %ebx, %eax
	ret

multiplication:
	movl number1(%rip), %eax
	movl number2(%rip), %ebx
	imull %ebx
	ret
	
division:
	movl number1(%rip), %eax
	xorl %edx, %edx
	movl number2(%rip), %ebx
	cmp $0, %ebx
	je wrong_div
	idivl %ebx
	ret

wrong_div:
	movl $0, %eax
	ret
	
modulus:
	movl number1(%rip), %eax
	cmp $0, %eax
	jl negativo
	ret

negativo:
	neg %eax
	ret
	
power2:
	movl number1(%rip), %eax
	imull %eax
	ret
	
power3:
	movl number1(%rip), %eax
	movl number1(%rip), %ebx
	imull %eax
	imull %ebx
	ret
	

