#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindromo(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        // Saltar caracteres no alfabéticos y convertir a minúsculas
        while (left < right && !isalpha(s[left])) left++;
        while (left < right && !isalpha(s[right])) right--;

        if (tolower(s[left]) != tolower(s[right])) {
            return 0; // No es un palíndromo
        }
        left++;
        right--;
    }
    return 1; // Es un palíndromo
}

int main() {
    char str1[] = "A man, a plan, a canal, Panama";
    char str2[] = "Hello World";

    printf("¿'%s' es un palíndromo? %d\n", str1, palindromo(str1));  // Output: 1
    printf("¿'%s' es un palíndromo? %d\n", str2, palindromo(str2));  // Output: 0

    return 0;
}
