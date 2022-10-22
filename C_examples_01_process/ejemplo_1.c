#include <stdio.h>
#include <unistd.h>

int main(void) {
    pid_t id_proceso;
    pid_t id_padre;

    id_proceso = getpid();
    id_padre = getppid();

    printf("PID proceso: %d\n", id_proceso);
    printf("PID proceso padre: %d\n", id_padre);
    return 0;
}
