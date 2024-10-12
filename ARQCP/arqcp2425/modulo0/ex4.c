#include <stdio.h>

int sum(int a, int b){
	return a + b;
}

int sum_digits(int a){

	int digito, soma = 0;

	while (a > 0){
		digito = a % 10;
		soma = sum(soma, digito);
		a = a / 10;
	}
	return soma;
}

int main(void){
	
	int a;
	
	printf("Digite o número desejado: ");
	scanf("%d", &a);
	
	printf("\nO valor da multiplicação é %d", sum_digits(a));
	
	return 0;
}
