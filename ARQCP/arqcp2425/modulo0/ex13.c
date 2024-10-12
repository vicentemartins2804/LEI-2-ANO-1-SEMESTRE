#include <stdio.h>
#include <string.h>

char get_ascii_char(int c){
	return (char)c;
}

int count_char(char str[], int c){
	int contador = 0;
	char caracter = get_ascii_char(c);
	for (int i = 0; str[i] != '\0'; i++){
		if (caracter == str[i]){
			contador++;
		}
	}
	return contador;
}

int main(void){
	char str[] = "massa";
	int asciicode = 97;
	
	printf("O valor ASCII %d (letra %c) aparece %d vezes na String '%s'.", asciicode, get_ascii_char(asciicode), count_char(str, asciicode), str);
}
