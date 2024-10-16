#include <stdio.h>

int count_words(char *str){
	int x = 0;
		if (*str != ' '){
			x++;
		}
		for (int i = 0; *(str + i + 1) != '\0'; i++){
			if (*(str + i) == ' ' && *(str + 1 + i) != ' '){
				x++;
			}
		}
		
		return x;
}

int main (void){
	char str[] = "the numBERr      must be    saved     e   ";
	int x = count_words(str);
	printf("Number of words: %d\n", x);
}
	
