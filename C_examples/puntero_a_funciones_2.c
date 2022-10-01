// --------------------------------------
// Ejemplo de uso de punteros a funciones
// Operaciones binarias entre enteros
// --------------------------------------

#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

int operacion(int a, int b, int (*op)(int, int)) {
    return op(a, b);
}

int main(void) {
    printf("%d\n", operacion(10, 20, suma));
    printf("%d\n", operacion(10, 20, resta));
    printf("%d\n", operacion(10, 20, multiplicacion));
    printf("%d\n", operacion(10, 20, division));
    return 0;
}
