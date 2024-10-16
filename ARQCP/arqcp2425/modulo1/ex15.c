#include <stdio.h>
#include <string.h>

void trim_string(char *str) {
    char *start = str;
    char *end;
    char *dest;

    while (*start == ' ') {
        start++;
    }

    end = str + strlen(str) - 1;
    while (end > start && *end == ' ') {
        end--;
    }

    dest = str;
    int space_found = 0;

    for (char *ptr = start; ptr <= end; ptr++) {
        if (*ptr != ' ') {
            *dest++ = *ptr; 
            space_found = 0;
        } else if (!space_found) {
            *dest++ = ' '; 
            space_found = 1; 
        }
    }

    *dest = '\0';
}

int main() {
    char str[] = "   the numBERr   must  be   saved   ";
    trim_string(str);
    printf("%s\n", str);
    return 0;
}
