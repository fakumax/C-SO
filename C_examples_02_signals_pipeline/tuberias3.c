/* ls -l | wc -l */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    int fd[2];
    pid_t id_proceso;
    if (pipe(fd) != 0) {
        exit(1);
    }
    id_proceso = fork();
    if (id_proceso == 0) {
        dup2(fd[1], 1);
        close(fd[0]);
        execlp("ls", "ls", "-l", NULL);
        exit(1);
    } else {
        dup2(fd[0], 0);
        close(fd[1]);
        execlp("wc", "wc", "-l", NULL);
        exit(1);
    }
    exit(2);
}
