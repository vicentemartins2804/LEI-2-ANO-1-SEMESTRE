#include <stdio.h>
#include "asm.h"

int op1 = 0, op2 = 0;
extern long op3, op4; // Declare op3 and op4 as long to match 64-bit `quad` in assembly
short s1 = 0;

int main(void) {
    int result, anotherResult;
    long yetAnotherResult;
    short swappedBytes;

    // User input for the variables
    printf("Valor op1: ");
    scanf("%d", &op1);

    printf("Valor op2: ");
    scanf("%d", &op2);

    printf("Valor op3: ");
    scanf("%ld", &op3);

    printf("Valor op4: ");
    scanf("%ld", &op4);
    
    printf("Valor s1: ");
    scanf("%hd", &s1);

    // Call the sum, another_sum, and yet_another_sum functions
    result = sum();
    anotherResult = another_sum();
    yetAnotherResult = yet_another_sum();
    swappedBytes = swapBytes();

    // Display the results
    printf("sum = %d: 0x%x\n", result, result);
    printf("another_sum = %d: 0x%x\n", anotherResult, anotherResult);
    printf("yet_another_sum = %ld: 0x%lx\n", yetAnotherResult, yetAnotherResult);
    printf("swapBytes = %hd: 0x%x\n", swappedBytes, (unsigned short)swappedBytes);

    return 0;
}
