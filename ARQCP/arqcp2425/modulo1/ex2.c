# include <stdio.h>

int main(void){
	
	int a = 28;
	double b = 28.042005;
	char c = 'd';
	
	int *ptrA = &a;
	double *ptrB = &b;
	char *ptrC = &c;
	
	printf("Int variable\n---------------\n");
	printf("Address: 0x%p\n", &a);
	printf("Value: %d\n", a);
	printf("Size: %zu bytes\n", sizeof(a));
	printf("\n\n");
	
	printf("Int pointer\n------------\n");
	printf("Address: 0x%p\n", &ptrA);
	printf("Value (pointed by): %d\n", *ptrA);
	printf("Size: %zu bytes\n", sizeof(ptrA));
	printf("\n\n");
	
	printf("Double variable\n---------------\n");
	printf("Address: 0x%p\n", &b);
	printf("Value: %f\n", b);
	printf("Size: %zu bytes\n", sizeof(b));
	printf("\n\n");
	
	printf("Double pointer\n---------------\n");
	printf("Address: 0x%p\n", &ptrB);
	printf("Value (pointed by): %f\n", *ptrB);
	printf("Size: %zu bytes\n", sizeof(ptrB));
	printf("\n\n");
	
	printf("Char variable\n---------------\n");
	printf("Address: 0x%p\n", &c);
	printf("Value: %c\n", c);
	printf("Size: %zu bytes\n", sizeof(c));
	printf("\n\n");
	
	printf("Char pointer\n---------------\n");
	printf("Address: 0x%p\n", &ptrC);
	printf("Value (pointed by): %c\n", *ptrC);
	printf("Size: %zu bytes\n", sizeof(ptrC));
	printf("\n");
}
