#include <stdio.h>
#include <unistd.h>

int main(void) {
    char *argv[] = {"/usr/bin/printenv", NULL};
    char *envp[] =
        {
            "HOME=/",
            "PATH=/bin:/usr/bin",
            "TZ=UTC0",
            "USER=claudio",
            "LOGNAME=claudio",
            NULL};
    execve(argv[0], argv, envp);
    return 0;
}
