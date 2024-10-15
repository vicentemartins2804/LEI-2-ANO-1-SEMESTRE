#include <stdio.h>

int sum_intefer_byts(unsigned int *p){
	int soma = 0;
	unsigned char *c = (unsigned char *)p;
	for (int i = 0; i < 4; i++){
		soma += *(c+i);
	}
	return soma;
}

int main (void){
	unsigned int d = 0xAABBCCDD;
	int r = sum_intefer_byts(&d);
	
	printf("A soma dos byts é: %d", r);
	
}
