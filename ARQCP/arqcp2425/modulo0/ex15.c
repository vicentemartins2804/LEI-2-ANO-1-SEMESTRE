#include <stdio.h>
#include <string.h>

int count_words(char str[]){
	int contador = 1;
	int numeroDeCaracteres = strlen(str);
	
	for(int i = 0; i < numeroDeCaracteres; i++){
		if (str[i] == ' '){
			contador++;
		}
	}
	return contador;
}

int main(void){
	char str[] = "Lava a loiça kingos";
	
	printf("A String '%s' tem %d palavras.", str, count_words(str));
}
