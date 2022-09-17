#include <stdio.h>
struct persona {
    int legajo;
    char nombre[40];
};

int main(void) {
    struct persona p;

    p.legajo = 10;
    scanf("%s", p.nombre);
    printf("Datos: %d, %s\n", p.legajo, p.nombre);
    printf("Elemento nombre, indice 0: %c\n", p.nombre[0]);
    return 0;
}
