#include <stdio.h>

char mas_repetido(char* s) {
    int count[256] = {0}; // Asumiendo un conjunto de caracteres ASCII
    int max_count = 0;
    char max_char = '\0';

    // Contar las repeticiones de cada carácter
    for (int i = 0; s[i] != '\0'; i++) {
        count[(unsigned char)s[i]]++;
        if (count[(unsigned char)s[i]] > max_count) {
            max_count = count[(unsigned char)s[i]];
            max_char = s[i];
        }
    }

    return max_char;
}

int main() {
    char str[] = "example string";

    char resultado = mas_repetido(str);
    printf("El carácter más repetido es: %c\n", resultado);

    return 0;
}
