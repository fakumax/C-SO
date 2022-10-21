#include <stdio.h>
#include <unistd.h>

int main(void) {
    char *args[3];
    pid_t id_proceso;
    id_proceso = fork();

    if (id_proceso == 0) {
        args[0] = "ls";
        args[1] = "-l";
        args[2] = NULL;
        if (execvp(args[0], args) < 0) {
            printf("Error en execvp\n");
            return 1;
        }
    } else {
        printf("Final\n");
    }
    return 0;
}
