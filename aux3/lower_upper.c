#include <stdio.h>
#include <ctype.h>

void to_lower(char* s) {
    while (*s) {
        *s = tolower(*s);
        s++;
    }
}

void to_upper(char* s) {
    while (*s) {
        *s = toupper(*s);
        s++;
    }
}

int main() {
    char str1[] = "Hello World!";
    char str2[] = "Hello World!";
    
    to_lower(str1);
    to_upper(str2);
    
    printf("Lowercase: %s\n", str1);  // Output: "hello world!"
    printf("Uppercase: %s\n", str2);  // Output: "HELLO WORLD!"
    
    return 0;
}
