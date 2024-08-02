#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num = 9;
    int resultado = factorial(num);
    printf("El factorial de %d es %d\n", num, resultado);
    return 0;
}