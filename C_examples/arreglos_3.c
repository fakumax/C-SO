#include <stdio.h>
#define LIMITE 10

int main(void) {
    int valores[LIMITE], i;

    for (i = 0; i < LIMITE; i++) {
        valores[i] = 0;
    }
    for (i = 0; i < LIMITE; i++) {
        printf("%d\n", valores[i]);
    }
    return 0;
}