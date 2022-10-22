#include <stdio.h>

int main(void) {
    union valores {
        int entero;
        float real;
        char caracter;
    };

    union valores v;

    v.real = 1.0;
    printf("El valor de v es: %f\n", v.real);
    printf("Ingrese un entero:\n");
    scanf("%d", &v.entero);
    printf("El valor de v es: %d\n", v.entero);
    return 0;
}
