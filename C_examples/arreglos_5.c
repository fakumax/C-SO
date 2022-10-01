#include <stdio.h>
#define LIMITE 7

int main(void) {
    int valores[LIMITE] = {10, 3, -23, 2};
    int menor_valor(int valores[]);  // prototipado

    printf("%d\n", menor_valor(valores));
    return 0;
}

int menor_valor(int valores[]) {
    int i, menor = valores[0];
    for (i = 1; i < LIMITE; i++) {
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }
    return menor;
}