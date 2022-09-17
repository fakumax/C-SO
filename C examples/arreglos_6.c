#include <stdio.h>
#define LIMITE 7

int main(void) {
    int valores[LIMITE] = {10, 3, -23, 2};
    int menor_valor(int valores[], int t);  // prototipado

    printf("%d\n", menor_valor(valores, LIMITE));
    return 0;
}

int menor_valor(int valores[], int t) {
    int i, menor = valores[0];
    for (i = 1; i < t; i++) {
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }
    return menor;
}