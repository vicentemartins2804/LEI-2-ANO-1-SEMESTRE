#include <stdio.h>
#include "asm.h"

int op1 = 0, op2 = 0;

int main(void) {
    int result, anotherResult;
    
    printf("Valor op1: ");
    scanf("%d", &op1);
    
    printf("Valor op2: ");
    scanf("%d", &op2);
    
    result = sum();
    anotherResult = another_sum();
    
    printf("sum = %d: 0x%x\n", result, result);
    printf("another_sum = %d: 0x%x\n", anotherResult, anotherResult);
    
    return 0;
}
