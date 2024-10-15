#include <stdio.h>

char* where_is(char *str, char c){
	
	for ( int i = 0; *(str + i) != '\0'; i++){
		if (*(str + i) == c)
			return (str + i);
	}
	return NULL;
}

int main(void){
	char str[] = "Massa";
	char c = 'M';
	
	printf("O endereço da posicao do char %c é %p", c, where_is(str, c));
	
	return 0;
}
	
