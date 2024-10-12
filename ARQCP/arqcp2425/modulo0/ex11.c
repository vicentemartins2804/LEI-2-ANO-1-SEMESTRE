#include <stdio.h>

int get_ascii_code(char c){
	return (int)c;
}

int string_to_int(char str[]){
	int a = 0;
	int i = 0;
	
	while(str[i] != '\0'){
	   a = a*10 + (get_ascii_code(str[i]) - 48);
	   i++;
	}
	
	return a;
}

int main(void){
	
	char c[] = "1";
	printf("\nO valor inteiro da String %s é %d \n",c, string_to_int(c));
	
	return 0;
}
