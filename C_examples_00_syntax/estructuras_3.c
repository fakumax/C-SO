#include <stdio.h>

int main(void) {
    struct caja {
        int largo;
        int ancho;
        int alto;
    };

    struct caja b;

    b = (struct caja){.alto = 10};
    printf("La caja tiene los siguientes valores:\n");
    printf("\tLargo: %d\n", b.largo);
    printf("\tAncho: %d\n", b.ancho);
    printf("\tAlto: %d\n", b.alto);
    return 0;
}
