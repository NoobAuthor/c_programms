#include <stdio.h>

typedef struct nodo {
  int x;
  struct nodo *sgte;
} Nodo;

void append(Nodo **pa, Nodo *b) {
  if (*pa == NULL) {
    *pa = b;
  } else {
    append(&((*pa)->sgte), b);
  }
}

// Función para imprimir la lista (para pruebas)
void printList(Nodo *n) {
  while (n != NULL) {
    printf("%d ", n->x);
    n = n->sgte;
  }
  printf("\n");
}

// Función principal para pruebas
int main() {
  Nodo a1 = {1, NULL};
  Nodo a2 = {2, NULL};
  a1.sgte = &a2;

  Nodo b1 = {3, NULL};
  Nodo b2 = {4, NULL};
  b1.sgte = &b2;

  Nodo *pa = &a1;
  Nodo *b = &b1;

  append(&pa, b);
  printList(pa); // Debería imprimir 1 2 3 4

  return 0;
}
