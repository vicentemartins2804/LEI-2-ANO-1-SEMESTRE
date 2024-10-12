#include <stdio.h>
char get_ascii_char(int c){
	return (char)c;
}

int main(void){
	
	int c;
	
	printf("Digite o número: ");
	scanf("%d", &c);
	
	printf("O valor ASCII do número %d é: %c", c, get_ascii_char(c));
	
	return 0;
}
