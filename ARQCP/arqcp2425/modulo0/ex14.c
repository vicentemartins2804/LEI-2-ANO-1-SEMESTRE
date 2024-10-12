#include <stdio.h>

int cmp(int a, int b){
	if (a < b)
		return -1;
	if (a == b)
		return 0;
	return 1;
}

int count_value(int vec[], int n, int value){
	int contador = 0;
	
	for (int i = 0; i < n; i++){
		if (cmp(vec[i], value) == 0){
			contador++;
		}
	}
	return contador;
}

int main(void){
	int vec[] = {1,2,2,4,5,5,5,6,7,7,7,7,8};
	int n = sizeof(vec) / sizeof(vec[0]);
	int value = 7;
	
	printf("O valor '%d' está presente no vetor %d vezes.", value, count_value(vec, n, value));
	
	return 0;
}
