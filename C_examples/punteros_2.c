#include <stdio.h>

int main(void) {
    int a = 10, b = 30;
    int *c = &a;

    printf("%p : %d\n", &a, a);
    printf("%p : %d\n", &b, b);
    printf("%p : %p : %d\n", &c, c, *c);
    return 0;
}
