#include <stdio.h>

void get_array_statistics(int* vec, int n, int* min, int* max, float* avg){
	int soma = 0;
	
	for( int i = 0; i < n; i++){
		soma += *(vec + i);
		if ( *(vec + i) >= *max){
			*max = *(vec + i);
		}
		if ( *(vec + i) <= *min){
			*min = *(vec + i);
		}
	}
	*avg = soma / n;
		
}

int main (void){
	
	int vec[] = {10,2,3,6,5,7,4,8,9,1};
	int n = 10, max = 0, min = 10000000, i = 0;
	float avg;
	
	get_array_statistics(vec, n, &min, &max, &avg);
	
	printf("Vec = {%d", vec[i]);
	for (i = 1; i < n; i++){
		printf(", %d", vec[i]);	
	}
	printf("}\n\n");
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	printf("Avg: %f", avg);
}
