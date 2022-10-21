#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    pid_t id_proceso;

    id_proceso = fork();
    if (id_proceso != -1) {
        if (id_proceso == 0) {
            printf("PID Hijo: %d\n", getpid());
        } else {
            printf("PID Padre: %d\n", getpid());
        }
    }
    return 0;
}