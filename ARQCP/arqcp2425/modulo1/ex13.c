#include <stdio.h>

void array_sort(short *vec, int n) {
    int i, j;
    short temp;

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

int sort_without_reps(short *src, int n, short *dest) {
    int i, count = 0;

    array_sort(src, n);

    for (i = 0; i < n; i++) {
        
        if (i == 0 || *(src + i) != *(src + i - 1)) {
            *(dest + count) = *(src + i);
            count++;  
        }
    }

    return count;
}

int main(void) {
    short src[] = {8, 7, 6, 4, 4, 3, 2, 1, 2, 5, 9};
    int n = 11;
    short dest[n];

    int unique_count = sort_without_reps(src, n, dest);

    printf("Sorted array without repetitions: ");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", *(dest + i));
    }
    printf("\nNumber of unique elements: %d\n", unique_count);

    return 0;
}
