#include <stdio.h>

int main(void) {
    enum valores { rojo,
                   azul,
                   verde } color;

    color = verde;
    printf("%d \n", color);
    return 0;
}
