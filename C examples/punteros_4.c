#include <stdio.h>

void absoluto(int *valor) {
    if (*valor < 0)
        *valor = -*valor;
}

int main(void) {
    int x = -10;

    absoluto(&x);
    printf("%d\n", x);

    return 0;
}
