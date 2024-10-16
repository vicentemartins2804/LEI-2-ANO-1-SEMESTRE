#include <stdio.h>

void format_word(char *str) {
    if (str == NULL || *str == '\0') {
        return;
    }

    if (*str >= 'a' && *str <= 'z') {
        *str = *str - 32;
    }

    str++;

    while (*str != '\0' && *str != ' ') {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;
        }
        str++;
    }
}

int main() {
    char sentence[] = "oLa aMiGoS";
    char *word_start = sentence;
    format_word(word_start);
    printf("%s\n", sentence);
    
    word_start = sentence + 4;
    format_word(word_start);
    printf("%s\n", sentence);
    
    return 0;
}
