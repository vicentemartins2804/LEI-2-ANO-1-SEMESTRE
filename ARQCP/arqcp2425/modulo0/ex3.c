#include <stdio.h>

int sum(int a, int b){
	return a + b;
}

int mul(int a, int b) {
	int resultado = 0;
	
	for (int i = 0; i < b; i++){
		resultado = sum(resultado, a);
	}
	
	return resultado;
}

int main(void){
	
	int a, b;
	
	printf("Digite o valor de 'a': ");
	scanf("%d", &a);
	
	printf("Digite o valor de 'b': ");
	scanf("%d", &b);
	
	printf("\nO valor da multiplicação é %d", mul(a, b));
	
	return 0;
}
