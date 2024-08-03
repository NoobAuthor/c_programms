#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso; %s <numero>\n", argv[0]);
        return 1;
    }


    int num = atoi(argv[1]);

    if (num < 0) {
        printf("Por favor ingrese un número no negativo.\n");
        return 1;
    }

    unsigned long long result = factorial(num);

    printf("El factorial de %d es %llu\n", num, result);

    return 0;
}
