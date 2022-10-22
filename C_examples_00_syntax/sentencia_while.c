#include <stdio.h>

int main(void) {
    int v = 1;

    while (v < 5) {
        printf("%d al cubo es %d\n", v, v * v * v);
        v++;  // v = v + 1;
    }

    return 0;
}