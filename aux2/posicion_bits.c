#include <stdio.h>

int posicionBits(int x, int p, int n) {
	int mask = (1 << n) - 1;
	for (int i = 0; i <= sizeof(x) * 8 - n; i++) {
		if ((x & (mask << 1)) == (p << i)) {
			return i;
		}
	}

	return -1;
}

int main() {
	int x, p, n;
	
	printf("Ingrese el valor de x: ");
	scanf("%d", &x);
	printf("Ingrese el valor de p: ");
	scanf("%d", &p);
	printf("Ingrese el valor de n: ");
	scanf("%d", &n);

	int resultado = posicionBits(x, p, n);
	if (resultado != -1) {
		printf("El patrón se encuentra en la posición: %d\n", resultado);
	} else {
		printf("El patrón no se encuentra en x\n");
	}

	return 0;
}
