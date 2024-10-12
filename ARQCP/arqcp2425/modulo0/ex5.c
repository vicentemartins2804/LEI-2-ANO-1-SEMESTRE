#include <stdio.h>

int cmp(int a, int b){
	if (a < b)
		return -1;
	if (a == b)
		return 0;
	return 1;
}

int main(void){
	
	int a, b;
	
	printf("Digite o valor de 'a': ");
	scanf("%d", &a);
	
	printf("Digite o valor de 'b': ");
	scanf("%d", &b);
	
	printf("\n %d", cmp(a, b));
	
	return 0;
}
