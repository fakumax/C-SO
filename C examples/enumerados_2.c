#include <stdio.h>

int main(void) {
    enum valores { rojo = 1,
                   azul = 5,
                   verde } color;

    color = rojo;
    printf("Rojo %d \n", color);
    color = azul;
    printf("Azul %d \n", color);
    color = verde;
    printf("Verde %d \n", color);
    return 0;
}
