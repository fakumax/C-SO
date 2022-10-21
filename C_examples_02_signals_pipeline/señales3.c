#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void manejador(int signum) {
    printf("Pasaron diez segundos!\n");
}

int main(void) {
    if (fork() == 0) {
        signal(SIGALRM, manejador);
    }
    alarm(10);
    pause();
    return 0;
}
