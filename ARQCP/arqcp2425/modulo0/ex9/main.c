#include <stdio.h>
#include "average.h"

int main(){
	int v[] = {1,2};
	int r = 0;
	r = average(v, 2);
	printf("average =%d\n", r);
	return 0;
}
