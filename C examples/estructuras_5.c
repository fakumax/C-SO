#include <stdio.h>

struct punto_2d {
    int x;
    int y;
};

void imprimir(struct punto_2d p) {
    printf("x: %d y: %d \n", p.x, p.y);
}

void cargar(struct punto_2d* p) {
    scanf("%d %d", &p->x, &p->y);
}

int main(void) {
    struct punto_2d p1;

    cargar(&p1);
    imprimir(p1);
    return 0;
}
