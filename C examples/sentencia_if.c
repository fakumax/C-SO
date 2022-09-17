#include <stdio.h>

int main(void) {
    int a = 0;

    printf("Ingrese un valor: ");
    scanf("%d", &a);

    if (a > 0) {
        printf("El valor ingresado es mayor a cero.\n");
    } else {
        printf("El valor ingresado es menor o igual a cero.\n");
    }
    return 0;
}