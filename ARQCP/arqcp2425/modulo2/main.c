#include <stdio.h>
#include "asm.h"

int op1 = 0, op2 = 0, op3ex10 = 0, a = 0;
extern long op3, op4;
long aEx12, bEx12;
short s1 = 0, s2 = 0, n1 = 0, n2 = 0, c = 0, d = 0, v1 = 0, v2 = 0, length1 = 0, length2 = 0, height = 0;
char b = 0;

int main(void) {
    int result, anotherResult, area, areaEx14;
    char isMultipleFlag, verifyFlags;
    long yetAnotherResult, sumAndSubtract, sum3intsOps;
    short swappedBytes, exchangedBytes, crossedSubBytes, crossedSubBytespt2;

    printf("Valor op1 (int): ");
    scanf("%d", &op1);

    printf("Valor op2 (int): ");
    scanf("%d", &op2);
    
    printf("Valor s1 (short): ");
    scanf("%hd", &s1);
    
    printf("Valor s2 (short): ");
    scanf("%hd", &s2);
    
    printf("Digite o valor de A (int): ");
    scanf("%d", &a);
    
    printf("Digite o valor de B (char): ");
    scanf("%hhd", &b);  
    
    printf("Digite o valor de C (short): ");
    scanf("%hd", &c);  
      
    printf("Digite o valor de D (short): ");
    scanf("%hd", &d);
    
    printf("Digite o valor de op3 (int)(ex10): ");
    scanf("%d", &op3ex10);
    
    printf("Digite o valor de B (long)(ex12): ");
    scanf("%ld", &bEx12);
    
    printf("Digite o valor de A (long)(ex12): ");
    scanf("%ld", &aEx12);
    
    printf("Digite o valor de v1 (short): ");
    scanf("%hd", &v1);  
      
    printf("Digite o valor de v2 (short): ");
    scanf("%hd", &v2);
    
    printf("Digite o valor de length1 (short): ");
    scanf("%hd", &length1);  
      
    printf("Digite o valor de length2 (short): ");
    scanf("%hd", &length2);
    
    printf("Digite o valor de height (short): ");
    scanf("%hd", &height);

    n1 = (short)op1;
    n2 = (short)op2;
	
    printf("\n\n------------------\n");
    printf("Exercício 1 / 2\n");
    printf("------------------\n");
    result = sum();
    printf("sum = %d: 0x%x\n", result, result);
    
    printf("\n------------------\n");
    printf("Exercício 3\n");
    printf("------------------\n");
    anotherResult = another_sum();
    printf("another_sum = %d: 0x%x\n", anotherResult, anotherResult);
    
    printf("\n------------------\n");
    printf("Exercício 4\n");
    printf("------------------\n");
    yetAnotherResult = yet_another_sum();
    printf("yet_another_sum = %ld: 0x%lx\n", yetAnotherResult, yetAnotherResult);
    
    printf("\n------------------\n");
    printf("Exercício 5\n");
    printf("------------------\n");
    swappedBytes = swapBytes();
    printf("swapBytes = %hd: 0x%x\n", swappedBytes, (unsigned short)swappedBytes);
    
    printf("\n------------------\n");
    printf("Exercício 6\n");
    printf("------------------\n");
    exchangedBytes = exchangeBytes();
    printf("exchangeBytes = %hd: 0x%x\n", exchangedBytes, (unsigned short)exchangedBytes);
    
    printf("\n------------------\n");
    printf("Exercício 7\n");
    printf("------------------\n");
    crossedSubBytes = crossSubBytes();
    printf("crossSubBytes = %hd: 0x%x\n", crossedSubBytes, (unsigned short)crossedSubBytes);
    
    printf("\n------------------\n");
    printf("Exercício 8\n");
    printf("------------------\n");
    crossedSubBytespt2 = crossSubBytespt2();
    printf("crossSubBytes = %hd: 0x%x\n", crossedSubBytespt2, (unsigned short)crossedSubBytespt2);
    
    printf("\n------------------\n");
    printf("Exercício 9\n");
    printf("------------------\n");
    sumAndSubtract = sum_and_subtract();
    printf("sum_and_subtract = %ld: 0x%x\n", sumAndSubtract, (unsigned short)sumAndSubtract);

    printf("\n------------------\n");
    printf("Exercício 10\n");
    printf("------------------\n");
    sum3intsOps = sum3ints();
    printf("sum3ints = %ld: 0x%x\n", sum3intsOps, (unsigned short)sum3intsOps);
    
    printf("\n------------------\n");
    printf("Exercício 11\n");
    printf("------------------\n");
	verifyFlags = verify_flags();
	printf("isMultiple = %d\n", verifyFlags);
    
    printf("\n------------------\n");
    printf("Exercício 12\n");
    printf("------------------\n");
    isMultipleFlag = isMultiple();
    printf("isMultiple = %d\n", isMultipleFlag);
    
    printf("\n------------------\n");
    printf("Exercício 13\n");
    printf("------------------\n");
    area = getArea();
    printf("getArea = %d\n", area);
    
    printf("\n------------------\n");
    printf("Exercício 14\n");
    printf("------------------\n");
    areaEx14 = getAreaEx14();
    printf("getArea = %d\n", areaEx14);
    return 0;
}
