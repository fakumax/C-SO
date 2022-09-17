#include <stdio.h>

int main(void) {
    int enteros[10];  // arreglo de 10 enteros
    int valor;

    enteros[0] = 5;
    valor = enteros[0];
    enteros[2] = enteros[0] * 2;
    enteros[3] = enteros[0] + enteros[2];
    scanf("%d", &enteros[1]);
    printf("El primer elemento del arreglo es %d\n", enteros[0]);
    return 0;
}
