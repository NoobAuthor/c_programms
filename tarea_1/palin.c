#include <stdio.h>
#include <stdint.h>

#include "palin.h"

int palindrome(uint32_t x) {
    // Variables para almacenar los bits a comparar
    uint32_t left, right;

    for (int i = 0; i < 4; i++) {
        // Extraer el nibble más significativo
        left = (x >> (28 - 4 * i)) & 0xF;

        // Extraer el nibble menos significativo
        right = (x >> (4 * i)) & 0xF;
        
        // Comparar los nibbles
        if (left != right) {
            return 0;  // No es palíndromo
        }
    }
    return 1;  // Es palíndromo
}
