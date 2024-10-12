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

int cmp(int a, int b){
	if (a < b)
		return -1;
	if (a == b)
		return 0;
	return 1;
}

int check_string(char str[], int h){
	if (fake_hash(str) == h){
		return 1;
	}
	return 0;
}

int main(void){
	char str[] = "O sol brilha sobre a montanha";
	int h = 2689;
	
	printf("[1]Corresponde\n[0]Não Corresponde\n--------------------\nResposta: %d\n", check_string(str, h));
	
	return 0;
}
