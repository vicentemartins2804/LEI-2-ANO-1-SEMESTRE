#include <stdio.h>
#include <string.h>

int sum(int a, int b){
	return a+b;
}

int get_ascii_code(char c){
	return (int)c;
}

int fake_hash(char str[]){
	int i = 0, soma = 0;
	
	while (str[i] != '\0'){
		soma = sum(soma, get_ascii_code(str[i]));
		i++;
	}
	
	return soma;
}

int main(void){
	char str[] = "O sol brilha sobre a montanha";
	
	printf("A String '%s' tem como soma dos valores ASCII '%d'", str, fake_hash(str));
}	