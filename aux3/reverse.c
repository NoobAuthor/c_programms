#include <stdio.h>
#include <string.h>

void reverse(char* s) {
    int left = 0;
    int right = strlen(s) - 1;
    char temp;

    while (left < right) {
        // Intercambiar caracteres en las posiciones 'left' y 'right'
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        // Mover los punteros hacia el centro
        left++;
        right--;
    }
}

int main() {
    char str[] = "Hello World";

    printf("Original: %s\n", str);
    reverse(str);
    printf("Invertido: %s\n", str);

    return 0;
}
