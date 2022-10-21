#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {
    pid_t proceso;

    proceso = fork();
    if (proceso != 0) {
        sleep(10);
        printf("Enviando una señal...\n");
        kill(proceso, SIGKILL);
        wait(NULL);
        printf("Hijo Finalizado\n");
        raise(SIGKILL);
    } else {
        printf("Esperando...\n");
        pause();
    }
    return 0;
}