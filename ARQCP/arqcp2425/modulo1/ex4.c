#include <stdio.h>

void capitalize(char *str) {

    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str++; 
    }
}

int main(void) {
    char str[] = "Hello";
    
    capitalize(str);
    
    printf("%s\n", str); 

    return 0;
}
