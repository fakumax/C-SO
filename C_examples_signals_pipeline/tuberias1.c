#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    int fd[2], i, x;
    pid_t pr;
    pipe(fd);
    pr = fork();
    if (pr == 0) {
        close(fd[1]);
        while (read(fd[0], &x, sizeof(int)) != 0)
            printf("%d\n", x);
        printf("\n");
    } else {
        close(fd[0]);
        for (i = 0; i < 10; i++)
            write(fd[1], &i, sizeof(int));
    }
    exit(0);
}
