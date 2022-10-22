#include <stdio.h>

int main(void) {
    int x, y;

    printf("Ingrese un valor: ");
    scanf("%d", &x);
    printf("Ingrese otro valor: ");
    scanf("%d", &y);

    printf("La división de los valores es: %f\n", (float)x / y);
    return 0;
}
