#include <stdio.h>

int main() {
    signed int signed_a = -10;
    signed int signed_b = 20;
    unsigned int unsigned_a = 10;
    unsigned int unsigned_b = 20;

    // Comparando valores
    if (signed_a < signed_b) {
        printf("signed_a (%d) es menor que signed_b (%d)\n", signed_a, signed_b);
    }

    if (unsigned_a < unsigned_b) {
        printf("unsigned_a (%u) es menor que unsigned_b (%u)\n", unsigned_a, unsigned_b);
    }

    // Intentar almacenar un valor negativo en unsigned int (no recomendado)
    unsigned int unsigned_negative = -5;
    printf("unsigned_negative: %u\n", unsigned_negative);  // Imprime un valor grande debido a wrap-around

    return 0;
}
