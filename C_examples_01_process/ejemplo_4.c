#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    int valor = 0;
    pid_t id_proceso;

    id_proceso = fork();
    if (id_proceso != -1) {
        if (id_proceso == 0) {
            printf("PID Hijo: %d\n", getpid());
            valor = 10;
        } else {
            printf("PID Padre: %d\n", getpid());
        }
    }
    printf("Valor = %d\n", valor);
    return 0;
}
