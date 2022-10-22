#include <stdio.h>

int main(void) {
    int valores[10], i;

    for (i = 0; i < 10; i++) {
        valores[i] = 0;
    }
    for (i = 0; i < 10; i++) {
        printf("%d\n", valores[i]);
    }
    return 0;
}