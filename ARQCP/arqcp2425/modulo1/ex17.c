#include <stdio.h>

void frequencies(float *grades, int n, int *freq){
	for (int i = 0; i < n; i++){
		int grade = (int)*(grades + i);
		*(freq + grade) = *(freq + grade) + 1;
	}
}

int main(void){
	float grades[] = {8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 0.0,
12.67, 16.23, 18.75};
	int n = 11;
	int freq[21] = {0};
	
	frequencies(grades, n, freq);
	
	printf("Freq = {%d", freq[0]);
	for (int i = 1; i < 21; i++){
		printf(", %d", freq[i]);
	}
	printf("}");
}
