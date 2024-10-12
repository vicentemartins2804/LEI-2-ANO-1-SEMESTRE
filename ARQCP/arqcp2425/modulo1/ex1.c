#include <stdio.h>

int main (void) {
	int x = 5;
	int* ptr_x = &x;
	float y = *ptr_x + 3;


    printf("PARTE A\n\nx: %d \n", x);
    printf("y: %f \n", y);
    printf("Address of x: %p \n", &x);
    printf("Address of y: %p \n", &y);
    printf("Address of ptr_x: %p \n", &ptr_x);
    printf("Value of ptr_x: %p \n", ptr_x);
    printf("Value pointed btý ptr_x: %d \n", *ptr_x);
    printf("-----------------------------------------------\n\n\n");
    
    int vec[] = {10, 20, 30, 40};
    int* ptr_vec = vec;
    int z = *ptr_vec;
    int h = *(ptr_vec + 3);
    

    printf("PARTE B\n\nz: %d \n", z);
    printf("h: %d \n", h);
    printf("Address of vec: %p \n", &vec);
    printf("Address of ptr_vec: %p \n", &ptr_vec);
    printf("Value of ptr_vec: %p \n", ptr_vec);
    printf("Value of vec: %p \n", vec);
    printf("The value pointed by ptr_vec: %d \n", *ptr_vec);
    printf("-----------------------------------------------\n\n\n");
    
    printf("PARTE C\n\n");
    int i;
    for(i = 0; i < 4; i++){
		printf("1: %p,%d\t", &vec[i],vec[i]);
	}
	printf("\n");
	for(ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++){
		printf("2: %p,%d\t", ptr_vec, *ptr_vec);
	}
	printf("\n");
	for(ptr_vec = vec + 3; ptr_vec >= vec; ptr_vec--){
		printf("3: %p,%d\t", ptr_vec, *ptr_vec);
	}
	printf("\n-----------------------------------------------\n\n\n");
	
	printf("PARTE D\n\n");
	int a;
	ptr_vec = vec;
	printf("4: %p,%d\n", ptr_vec, *ptr_vec);
	a = *ptr_vec++;
	printf("5: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
	ptr_vec = vec;
	a = (*ptr_vec)++;
	printf("6: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
	ptr_vec = vec;
	a = *++ptr_vec;
	printf("7: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
	ptr_vec = vec;
	a = ++*ptr_vec;
	printf("8: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
	printf("\n");
	for( ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++){
		printf("9: %p,%d\t", ptr_vec, *ptr_vec);
	}
	
	printf("\n-----------------------------------------------\n\n\n");
	
	printf("PARTE E\n\n");
	unsigned int d = 0xAABBCCDD;
	printf("10: %p,%x\t", &d,d);
	printf("\n");
	unsigned char* ptr_d = (unsigned char*)&d;
	unsigned char* p;
	for(p = ptr_d; p < ptr_d + sizeof(unsigned int); p++){
		printf("11: %p,%x\t", p, (unsigned char)*p);
	}
	
	return 0;
}
