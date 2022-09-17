#include <stdio.h>

int main(void) {
    int a = 10;
    int *b = &a;

    *b = 2;
    printf("%d\n", a);
    printf("%d\n", *b);

    return 0;
}
