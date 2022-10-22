#include <stdio.h>
#include <unistd.h>

int main(void) {
    pid_t id_proceso;
    id_proceso = fork();

    if (id_proceso == 0) {
        if (execlp("ls", "ls", "-l", NULL) < 0) {
            printf("Error en execlp\n");
            return 1;
        }
    } else {
        printf("Final\n");
    }
    return 0;
}
