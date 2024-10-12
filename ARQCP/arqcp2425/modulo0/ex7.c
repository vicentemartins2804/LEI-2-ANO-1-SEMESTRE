#include <stdio.h>

int get_ascii_code(char c){
	return (int)c;
}

int main(void){
	
	char c;
	
	printf("Digite o caracter: ");
	scanf("%c", &c);
	
	printf("O valor ASCII do caracter %c é %d", c, get_ascii_code(c));
	
	return 0;
}
