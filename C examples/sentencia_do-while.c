#include <stdio.h>

int main(void) {
    int valor;

    do {
        printf("Ingrese un valor entero (0 para salir) ");
        scanf("%d", &valor);
        printf("El valor ingresado es: %d\n", valor);
    } while (valor != 0);

    return 0;
}