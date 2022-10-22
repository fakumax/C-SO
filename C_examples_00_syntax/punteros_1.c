#include <stdio.h>

int main(void) {
    int a = 2;
    int* pA = &a;

    printf("%d\n", a);
    printf("%x\n", a);
    printf("%p\n", &a);
    printf("%p\n", pA);
    printf("%d\n", *pA);
    printf("%p\n", &pA);
    return 0;
}
