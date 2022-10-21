#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {
    pid_t id;
    int estado;

    id = fork();
    if (id == -1) {
        exit(1);
    }
    if (id == 0) {
        printf("10 segundos...\n");
        sleep(10);
        printf("Final Hijo\n");
        exit(0);
    } else {
        printf("PID hijo: %d\n", id);
        printf("Padre esperando...\n");
        wait(&estado);
        if (WIFEXITED(estado)) {
            printf("Hijo termino normalmente\n");
        }
        if (WIFSIGNALED(estado)) {
            printf("Hijo termino a causa de una señal\n");
        }
        printf("Final Padre\n");
        exit(0);
    }
}