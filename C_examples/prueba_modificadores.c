#include <stdio.h>

int main(void) {
    int n;
    float resultado;
    printf("Prueba1\n\n");
    for (n = 1; n <= 10; ++n) {
        resultado = (float)n / 3;
        printf("%4d %.2f\n", n, resultado);
    }
    printf("\nPrueba2\n\n");
    for (n = 1; n <= 10; ++n) {
        resultado = (float)n / 3;
        printf("%-4d %.4f\n", n, resultado);
    }
    return 0;
}