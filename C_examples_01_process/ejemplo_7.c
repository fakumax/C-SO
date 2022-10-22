#include <stdio.h>
#include <unistd.h>
#define XOPEN_SOURCE 500

int main(void) {
    pid_t hijo = fork();

    if (hijo == 0) {
        printf("Desde el hijo (Antes): proceso hijo con PGID %d\n", getpgid(0));
        setpgid(0, 0);
        printf("Desde el hijo: proceso hijo con PGID %d\n", getpgid(0));
    } else {
        printf("Desde el padre (Antes): proceso hijo con PGID %d\n", getpgid(hijo));
        setpgid(hijo, hijo);
        printf("Desde el padre: proceso hijo con PGID %d\n", getpgid(hijo));
    }
    return 0;
}
