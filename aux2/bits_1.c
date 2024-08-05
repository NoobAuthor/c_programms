#include <stdio.h>

int bits1(unsigned int n) {
	int count = 0;
	while (n) {
		count += n & 1; // Suma el bits menos significado.
		n >>= 1;
	}

	return count;
}

int main() {
	unsigned int num;

	printf("Ingrese un número: ");
	scanf("%u", &num);

	int resultado = bits1(num);
	printf("El número de bits de 1 de %u es: %d\n", num, resultado);

	return 0;
}
