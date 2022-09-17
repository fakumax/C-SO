#include <stdio.h>

int main(void) {
    struct caja {
        int largo;
        int ancho;
        int alto;
    };

    struct caja b;

    b.largo = 10;
    printf("Ingrese ancho y alto (Formato (Ancho Alto)):\n");
    scanf("%d %d", &b.ancho, &b.alto);
    printf("La caja tiene los siguientes valores:\n");
    printf("\tLargo: %d\n", b.largo);
    printf("\tAncho: %d\n", b.ancho);
    printf("\tAlto: %d\n", b.alto);
    return 0;
}
