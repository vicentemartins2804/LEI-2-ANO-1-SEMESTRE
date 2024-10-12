#include <stdio.h>
#include <string.h>

int count_words(char str[]){
	int contador = 1, i = 0;
	
	while(str[i] != '\0'){
		if (str[i] == ' '){
			contador++;
		}
		i++;
	}
	return contador;
}

int main(void){
	char str[] = "Lava a loiça kingos";
	
	printf("A String '%s' tem %d palavras.", str, count_words(str));
}
