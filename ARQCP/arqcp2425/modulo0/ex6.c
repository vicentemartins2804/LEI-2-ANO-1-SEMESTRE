#include <stdio.h>

int get_greater_digit(int a, int b){
	
	if (a <= b) {
		return b;
	}
	return a;
}

int main(void){
	
	int a, b;
	
	printf("Digite o valor de 'a': ");
	scanf("%d", &a);
	
	printf("Digite o valor de 'b': ");
	scanf("%d", &b);
	
	printf("\nO maior valor é: %d", get_greater_digit(a, b));
	
	return 0;
}
