#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    char cad;
    int tuberia;

    tuberia = open("prueba.dat", O_RDONLY);
    while (read(tuberia, &cad, sizeof(cad)) != 0)
        printf("%c", cad);
    close(tuberia);
    exit(0);
}