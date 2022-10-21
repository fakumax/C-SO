#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    pid_t i;

    i = fork();
    if (i == 0) {
        printf("Hijo.  pid = %d, ppid = %d\n", getpid(), getppid());
        sleep(5);
        printf("Despues del sleep().  pid = %d, ppid = %d\n", getpid(), getppid());
        return 0;
    } else {
        sleep(1);
        printf("Padre finaliza.\n");
        return 0;
    }
}
