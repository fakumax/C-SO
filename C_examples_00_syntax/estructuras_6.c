#include <stdio.h>

struct punto_2d {
    int x;
    int y;
};

int main(void) {
    struct punto_2d puntos[3] = {[1].x = 2};

    puntos[0].x = 1;
    puntos[0].y = puntos[1].x;
    printf("x: %d y: %d \n", puntos[0].x, puntos[0].y);
    scanf("%d", &puntos[1].y);
    printf("x: %d y: %d \n", puntos[1].x, puntos[1].y);
    return 0;
}
