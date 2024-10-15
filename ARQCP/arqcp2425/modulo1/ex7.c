#include <stdio.h>

void capitalize2(char *str) {

    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str++; 
    }
}

int main(void) {
    char str[] = "Hello";
    
    capitalize2(str);
    
    printf("%s\n", str); 

    return 0;
}
