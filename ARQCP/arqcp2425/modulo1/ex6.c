#include <stdio.h>

int sum_even (int *vec, int n){
	
	int soma = 0;
	
	for (int i = 0; i < n; i++){
		soma += *(vec + i);
	}
	return soma; 
}

int main (void){
	int vec[] = {1,2,3,4,5};
	int n = 5;
	
	printf("A soma dos valores do array é: %d", sum_even(vec, n));
}
