#include <stdio.h>
#include <stdlib.h>

void factoresPrimos(int n) {
    if (n <= 1) {
        return;
    }

    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }

    for (int i = 3; i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    if (n > 2) {
        printf("%d ", n);
    }

    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso; %s <numero>\n", argv[0]);
        return 1;
    }

    int num = atoi(argv[1]);

    if (num <= 0) {
        printf("Por favor ingrese un número positivo mayor a 0.\n");
        return 1;
    }

    factoresPrimos(num);

    return 0;
}
