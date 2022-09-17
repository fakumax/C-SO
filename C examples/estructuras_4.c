#include <stdio.h>

struct punto_2d {
    int x;
    int y;
};

void imprimir(struct punto_2d p) {
    printf("x: %d y: %d \n", p.x, p.y);
}

int main(void) {
    struct punto_2d p1 = {10, 20};

    imprimir(p1);
    return 0;
}
