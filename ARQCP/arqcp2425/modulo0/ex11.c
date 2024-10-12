#include <stdio.h>

int get_ascii_code(char c){
	return (int)c;
}

int string_to_int(char str[]){
	int a = 0;
	
	for (int i = 0; i < 4; i++){
	   a = a*10 + (get_ascii_code(str[i]) - 48);
	}
	
	return a;
}

int main(void){
	
	char c[] = "8341";
	printf("\nO valor inteiro da String %s é %d \n",c, string_to_int(c));
	
	return 0;
}
