#include <stdio.h>

int main(void) {
    int i, v;

    printf("Ingrese un valor entero: ");
    scanf("%d", &v);

    for (i = 0; i <= 10; i++) {
        printf("%d por %d es %d\n", v, i, v * i);
    }

    return 0;
}