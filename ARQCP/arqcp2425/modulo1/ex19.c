#include <stdio.h>

void swap(short* vec1, short* vec2, int size){
	int tmp;
	for (int i = 0; i < size; i++){
		tmp = *(vec1 + i);
		*(vec1 + i) = *(vec2 + i);
		*(vec2 + i) = tmp;
	}
}

int main (void){
	short vec1[] = {1,2,3,4,5,6,7,8,9};
	short vec2[] = {9,8,7,6,5,4,3,2,1};
	int n = 9;
	
	swap(vec1, vec2, n);
	
	printf("vec1 = {%d", vec1[0]);
	for (int i = 1; i < n; i++){
		printf(", %d", vec1[i]);
	}
	printf("}\n");
	
	printf("vec2 = {%d", vec2[0]);
	for (int i = 1; i < n; i++){
		printf(", %d", vec2[i]);
	}
	printf("}\n");
}
