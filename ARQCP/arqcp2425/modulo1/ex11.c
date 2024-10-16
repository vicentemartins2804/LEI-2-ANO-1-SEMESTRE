#include <stdio.h>

int sum_odd(int *p){
	int soma = 0;
	for ( int i = 1; i < *p + 1; i++ ){
		soma += *(p + i);
	}
	return soma;
}

int main (void){
	int p[] = {5,1,2,3,4,5};
	
	printf("A soma é %d\n", sum_odd(p));
}
