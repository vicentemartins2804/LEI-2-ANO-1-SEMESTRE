#include <stdio.h>
#include "asm.h"

int op1 = 0, op2 = 0, op3ex10 = 0, a = 0, aEx15 = 0, bEx15 = 0, cEx15 = 0, dEx15 = 0, number1 = 0, number2 = 0, operation = 0, nn = 0;
extern long op3, op4;
long aEx12, bEx12, num;
short s1 = 0, s2 = 0, n1 = 0, n2 = 0, c = 0, d = 0, v1 = 0, v2 = 0, length1 = 0, length2 = 0, height = 0, numEx20 = 0, codeSalary = 0, currentSalary = 0;
char b = 0, desired = 0, current = 0;

int main(void) {
    int result, anotherResult, area, areaEx14, resultEx15, resultEx16, casenum, calculatorResult, sigmaRes, salary;
    char isMultipleFlag, verifyFlags, checkNum;
    long yetAnotherResult, sumAndSubtract, sum3intsOps;
    short swappedBytes, exchangedBytes, crossedSubBytes, crossedSubBytespt2, neededTime;
    
	printf("Escreve o número do exercício: ");
    scanf("%d", &casenum);
    
	switch (casenum) {
		case 1:
			printf("Valor op1 (int): ");
			scanf("%d", &op1);

			printf("Valor op2 (int): ");
			scanf("%d", &op2);
			
			printf("\n------------------\n");
			printf("Exercício 1 / 2\n");
			printf("------------------\n");
			result = sum();
			printf("sum = %d: 0x%x\n\n", result, result);
			break;
		
		case 2:
			printf("Valor op1 (int): ");
			scanf("%d", &op1);

			printf("Valor op2 (int): ");
			scanf("%d", &op2);
			
			printf("\n------------------\n");
			printf("Exercício 1 / 2\n");
			printf("------------------\n");
			result = sum();
			printf("sum = %d: 0x%x\n\n", result, result);
			break;
			
		case 3:
			printf("Valor op1 (int): ");
			scanf("%d", &op1);

			printf("Valor op2 (int): ");
			scanf("%d", &op2);
			
			printf("\n------------------\n");
			printf("Exercício 3\n");
			printf("------------------\n");
			anotherResult = another_sum();
			printf("another_sum = %d: 0x%x\n\n", anotherResult, anotherResult);
			break;
			
		case 4:
			printf("Valor op1 (int): ");
			scanf("%d", &op1);

			printf("Valor op2 (int): ");
			scanf("%d", &op2);
			
			printf("\n------------------\n");
			printf("Exercício 4\n");
			printf("------------------\n");
			yetAnotherResult = yet_another_sum();
			printf("yet_another_sum = %ld: 0x%lx\n\n", yetAnotherResult, yetAnotherResult);
			break;
		
		case 5:
			printf("Valor s1 (short): ");
			scanf("%hd", &s1);
			printf("\n------------------\n");
			printf("Exercício 5\n");
			printf("------------------\n");
			swappedBytes = swapBytes();
			printf("swapBytes = %hd: 0x%x\n\n", swappedBytes, (unsigned short)swappedBytes);
			break;
			
		case 6:
			printf("Valor op1 (int): ");
			scanf("%d", &op1);

			printf("Valor op2 (int): ");
			scanf("%d", &op2);
			
			n1 = (short)op1;
			n2 = (short)op2;
    
			printf("\n------------------\n");
			printf("Exercício 6\n");
			printf("------------------\n");
			exchangedBytes = exchangeBytes();
			printf("exchangeBytes = %hd: 0x%x\n\n", exchangedBytes, (unsigned short)exchangedBytes);
			break;
		
		case 7:
			printf("Valor s1 (short): ");
			scanf("%hd", &s1);
		
			printf("Valor s2 (short): ");
			scanf("%hd", &s2);
			
			printf("\n------------------\n");
			printf("Exercício 7\n");
			printf("------------------\n");
			crossedSubBytes = crossSubBytes();
			printf("crossSubBytes = %hd: 0x%x\n\n", crossedSubBytes, (unsigned short)crossedSubBytes);
			break;
			
		case 8:
		    printf("\n------------------\n");
			printf("Exercício 8\n");
			printf("------------------\n");
			crossedSubBytespt2 = crossSubBytespt2();
			printf("crossSubBytes = %hd: 0x%x\n\n", crossedSubBytespt2, (unsigned short)crossedSubBytespt2);
			break;
			
		case 9:	
			printf("Digite o valor de A (int): ");
			scanf("%d", &a);
			
			printf("Digite o valor de B (char): ");
			scanf("%hhd", &b);  
			
			printf("Digite o valor de C (short): ");
			scanf("%hd", &c);  
			  
			printf("Digite o valor de D (short): ");
			scanf("%hd", &d);
			
			printf("\n------------------\n");
			printf("Exercício 9\n");
			printf("------------------\n");
			sumAndSubtract = sum_and_subtract();
			printf("sum_and_subtract = %ld: 0x%x\n\n", sumAndSubtract, (unsigned short)sumAndSubtract);
			break;
			
		case 10:
			printf("Valor op1 (int): ");
			scanf("%d", &op1);
			printf("Valor op2 (int): ");
			scanf("%d", &op2);
			printf("Digite o valor de op3 (int)(ex10): ");
			scanf("%d", &op3ex10);
			printf("\n------------------\n");
			printf("Exercício 10\n");
			printf("------------------\n");
			sum3intsOps = sum3ints();
			printf("sum3ints = %ld: 0x%x\n\n", sum3intsOps, (unsigned short)sum3intsOps);
			break;
		
		case 11:
			printf("Digite o valor de v1 (short): ");
			scanf("%hd", &v1);  
			  
			printf("Digite o valor de v2 (short): ");
			scanf("%hd", &v2);
			printf("\n------------------\n");
			printf("Exercício 11\n");
			printf("------------------\n");
			verifyFlags = verify_flags();
			printf("isMultiple = %d\n\n", verifyFlags);
			break;
		
		case 12:
			printf("Digite o valor de B (long)(ex12): ");
			scanf("%ld", &bEx12);
			
			printf("Digite o valor de A (long)(ex12): ");
			scanf("%ld", &aEx12);
			
			printf("\n------------------\n");
			printf("Exercício 12\n");
			printf("------------------\n");
			isMultipleFlag = isMultiple();
			printf("isMultiple = %d\n\n", isMultipleFlag);
			break;
		
		case 13:
			printf("Digite o valor de length1 (short): ");
			scanf("%hd", &length1);  
			  
			printf("Digite o valor de length2 (short): ");
			scanf("%hd", &length2);
			
			printf("Digite o valor de height (short): ");
			scanf("%hd", &height);
			
			printf("\n------------------\n");
			printf("Exercício 13\n");
			printf("------------------\n");
			area = getArea();
			printf("getArea = %d\n\n", area);
			break;
		
		case 14:
			printf("\n------------------\n");
			printf("Exercício 14\n");
			printf("------------------\n");
			areaEx14 = getAreaEx14();
			printf("getArea = %d\n\n", areaEx14);
			break;
		
		case 15:
		
			printf("Digite o valor de A (ex15)(int): ");
			scanf("%d", &aEx15);
			
			printf("Digite o valor de B (ex15)(int): ");
			scanf("%d", &bEx15);
			
			printf("Digite o valor de C (ex15)(int): ");
			scanf("%d", &cEx15);
			
			printf("Digite o valor de D (ex15)(int): ");
			scanf("%d", &dEx15);

			printf("\n------------------\n");
			printf("Exercício 15\n");
			printf("------------------\n");
			resultEx15 = compute();
			printf("compute = %d\n\n", resultEx15);
			break;
		
		case 16:
		
			printf("Digite o valor de num: ");
			scanf("%ld", &num);
    
    
			printf("\n------------------\n");
			printf("Exercício 16\n");
			printf("------------------\n");
			resultEx16 = steps();
			printf("steps = %d\n\n", resultEx16);
			break;
			
		case 17:
		
			printf("[1] Soma\n[2] Subtração\n[3] Multiplicação\n[4] Divisão\n[5] Múdulo\n[6] Potência de 2\n[7] Potência de 3\n");
			printf("Digite a operação: ");
			scanf("%d", &operation);
			printf("\n\n");
			
			switch (operation) {
				case 1:
				case 2:
				case 3:
				case 4:
					printf("Digite o primeiro valor: ");
					scanf("%d", &number1);
					printf("Digite o segundo valor: ");
					scanf("%d", &number2);
					break;
				case 5:
				case 6:
				case 7:
					printf("Digite o valor: ");
					scanf("%d", &number1);
					break;
			}

			
    
			printf("\n------------------\n");
			printf("Exercício 17\n");
			printf("------------------\n");
			calculatorResult = calculator();
			printf("calculator = %d\n\n", calculatorResult);
			break;
			
		case 18:
		
			printf("Digite o valor de 'n': ");
			scanf("%d", &nn);
    
			printf("\n------------------\n");
			printf("Exercício 18\n");
			printf("------------------\n");
			sigmaRes = sigma();
			printf("sigma = %d\n\n", sigmaRes);
			break;
			
		case 19:
		
			printf("Digite a temperatura atual: ");
			scanf("%hhd", &current);
			printf("Digite a temperatura desejada: ");
			scanf("%hhd", &desired);
    
    
			printf("\n------------------\n");
			printf("Exercício 19\n");
			printf("------------------\n");
			neededTime = needed_time();
			printf("needed_time = %hd\n\n", neededTime);
			break;
		
		case 20:
		
			printf("Digite o valor: ");
			scanf("%hd", &numEx20);
    
    
			printf("\n------------------\n");
			printf("Exercício 20\n");
			printf("------------------\n");
			checkNum = check_num();
			printf("check_num = %hd\n\n", checkNum);
			break;
			
		case 21:
		
			printf("Digite o salário atual: ");
			scanf("%hd", &currentSalary);
		
			printf("Digite o seu código: ");
			scanf("%hd", &codeSalary);
    
			printf("\n------------------\n");
			printf("Exercício 21\n");
			printf("------------------\n");
			salary = new_salary();
			printf("new_salary = %d\n\n", salary);
			break;
	}
    
    
    return 0;
}
