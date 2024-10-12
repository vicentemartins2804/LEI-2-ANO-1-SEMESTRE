#include <stdio.h>

int sum(int a, int b){
	return a+b;
}

int main(void){
	
	int a, b;
	
	printf("Digite o valor de 'a': ");
	scanf("%d", &a);
	
	printf("Digite o valor de 'b': ");
	scanf("%d", &b);
	
	printf("\nO valor da soma é %d", sum(a, b));
	
	return 0;
}
