#include <stdio.h>

void copy_vec(int *vec1, int n, int *vec2){
	
	for (int i = 0; i < n; i++){
		*(vec2+i) = *(vec1+i);
	}
}

int main(void){
	int vec1[] = {1,7,3,12,5};
	int vec2[10];
	int n = 4;
	int i = 0;
	
	copy_vec(vec1, n, vec2);
	printf("Vec2 = {%d", vec2[i]);
	for (i = 1; vec2[i] != '\0'; i++){
		printf(", %d", vec2[i]);	
	}
	printf("}");
}
