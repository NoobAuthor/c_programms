#include <stdio.h>

// Función para reemplazar k bits en x a partir del i-ésimo bit de x por el valor val
unsigned repBits(unsigned x, int i, int k, unsigned val) {
    // Crear una máscara con k bits en 1
    unsigned mask = (1 << k) - 1;

    // Desplazar la máscara a la posición i
    mask <<= i;

    // Limpiar los k bits en la posición i de x
    x &= ~mask;

    // Desplazar val a la posición i
    val <<= i;

    // Insertar los nuevos bits en x
    x |= (val & mask);

    return x;
}

int main() {
    unsigned x, val;
    int i, k;

    // Solicita al usuario que ingrese los valores
    printf("Ingrese el valor de x: ");
    scanf("%u", &x);
    printf("Ingrese la posición i: ");
    scanf("%d", &i);
    printf("Ingrese el número de bits k: ");
    scanf("%d", &k);
    printf("Ingrese el valor val: ");
    scanf("%u", &val);

    // Llama a la función repBits y muestra el resultado
    unsigned result = repBits(x, i, k, val);
    printf("El resultado es: %u\n", result);

    return 0;
}
