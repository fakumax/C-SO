#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    int tuberia;

    mkfifo("prueba.dat", S_IWUSR | S_IRUSR | S_IRGRP | S_IROTH);
    tuberia = open("prueba.dat", O_WRONLY);
    write(tuberia, "Hola Mundo\n", 12);
    write(tuberia, "Hola\n", 6);
    close(tuberia);
    exit(0);
}
