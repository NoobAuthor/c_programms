#include <stdio.h>

int main()
{
    float celsius = 23.0;

    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("%.2f°C is queal to %.2f°F\n", celsius, fahrenheit);

    return 0;
}