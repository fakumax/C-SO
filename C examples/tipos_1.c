#include <stdio.h>

typedef struct {
    int d;
    int m;
    int a;
} fecha;  // Declaración de un nuevo tipo llamado fecha

typedef unsigned int word;  // Tipo word de Pascal

int main(void) {
    fecha v;  // Declaración de una variable de tipo fecha
    word y = 7;

    v.d = 8;
    v.m = 12;
    v.a = 1978;
    printf("v es igual a: %d, %d, %d\n", v.d, v.m, v.a);
    printf("y es igual a: %u\n", y);
    return 0;
}
