#include <stdio.h>

void array_sort(int *vec, int n){
	 int i, j, temp;

  
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(vec + j) > *(vec + j + 1)) {
               
                temp = *(vec + j);
                *(vec + j) = *(vec + j + 1);
                *(vec + j + 1) = temp;
            }
        }
    }
}

int main(void){
	int vec[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7; 
    array_sort(vec, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", *(vec + i));
    }

    return 0;
	
}
