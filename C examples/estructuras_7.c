#include <stdio.h>
struct punto_2d {
    int x;
    int y;
};

struct bi_puntos {
    struct punto_2d p1;
    struct punto_2d p2;
};

int main(void) {
    struct bi_puntos b = {{.x = 10, .y = 20}};
    struct bi_puntos d = {{1, 2}, {3, 4}};

    b.p2.x = 50;
    b.p2.y = 100;
    printf("b: (%d,%d),(%d,%d)\n", b.p1.x, b.p1.y, b.p2.x, b.p2.y);
    printf("d: (%d,%d),(%d,%d)\n", d.p1.x, d.p1.y, d.p2.x, d.p2.y);
    return 0;
}
