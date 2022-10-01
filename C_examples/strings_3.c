#include <stdio.h>

int main(void) {
    char cadena[10];

    fgets(cadena, 10, stdin);
    printf("%s\n", cadena);
    return 0;
}