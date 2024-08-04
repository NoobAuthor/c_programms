#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int decimal(int binario) {
    int decimal = 0;
    int base = 1;

    while (binario > 0) {
        int ultimo_digito = binario % 10;
        decimal += ultimo_digito * base;
        binario = binario / 10;
        base = base * 2;
    }

    return decimal;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero_binario>\n", argv[0]);
        return 1;
    }

    int num_binario = atoi(argv[1]);
    int resultado = decimal(num_binario);

    printf("%d\n", resultado);

    return 0;
}
