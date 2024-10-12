#include <stdio.h>
#include <string.h>

int sum(int a, int b){
	return a+b;
}

int get_ascii_code(char c){
	return (int)c;
}

int fake_hash(char str[]){
	int nrCaracteres = strlen(str), soma = 0;
	
	for (int i = 0; i < nrCaracteres; i++){
		soma = sum(soma, get_ascii_code(str[i]));
	}
	
	return soma;
}

int main(void){
	char str[] = "O sol brilha sobre a montanha";
	
	printf("A String '%s' tem como soma dos valores ASCII '%d'", str, fake_hash(str));
}	
