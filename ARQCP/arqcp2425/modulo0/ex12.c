#include <stdio.h>

int get_ascii_code(char c){
    return (int)c;
}

int integer_part(char str[]){
    int i = 0, a = 0;
    
    while(str[i] != '.' && str[i] != '\0'){
        a = a * 10 + (get_ascii_code(str[i]) - 48);
        i++;
    }
    
    return a;
}

int fractional_part(char str[]){
	int i = 0, a = 0;
	
	while(str[i] != '.' && str[i] != '\0'){
        i++;
    }
    
    i++;
    
    while(str[i] != '\0'){
		a = a * 10 + (get_ascii_code(str[i]) - 48);
		i++;
	}
	return a;
}

int main(void){
    char c[] = "12.214";
    
    printf("O valor inteiro é: %d\n", integer_part(c));
    printf("O valor facionário é: %d", fractional_part(c));
}
