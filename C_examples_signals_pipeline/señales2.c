#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void manejador(int sig) {
    printf("Señal recibida: %d.\n", sig);
}

int main(void) {
    if (signal(SIGINT, manejador) == SIG_ERR) {
        perror("No se puede manejar SIGINT!");
        exit(1);
    }

    for (;;) {
        printf("Esperando un Ctrl-C\n");
        pause();
    }
    return 0;
}