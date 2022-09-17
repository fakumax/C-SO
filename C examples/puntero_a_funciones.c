// --------------------------------------
// Ejemplo de uso de punteros a funciones
// Ordenamiento Burbuja (Bubblesort)
// --------------------------------------

#include <stdio.h>
#define LIMITE 10

void asc(int* a, int* b) {
    int t;
    if (*a > *b) {
        t = *a;
        *a = *b;
        *b = t;
    }
}

void desc(int* a, int* b) {
    int t;
    if (*a < *b) {
        t = *a;
        *a = *b;
        *b = t;
    }
}

void ordenar(int arreglo[], void (*orden)(int*, int*)) {
    int i, j;
    for (i = 1; i < LIMITE; i++)
        for (j = 0; j < LIMITE - i; j++)
            orden(&arreglo[j], &arreglo[j + 1]);
}

void imprimir(char texto[], int arreglo[]) {
    int i;
    printf("%s: \n", texto);
    for (i = 0; i < LIMITE; i++)
        printf("%d ", arreglo[i]);
    printf("\n");
}

int main(void) {
    int arreglo[10] = {4, 431, 22, 433, -4, 35, 26, 437, 38, 439};

    imprimir("Arreglo Inicial", arreglo);
    ordenar(arreglo, asc);
    imprimir("Arreglo Resultante", arreglo);
    ordenar(arreglo, desc);
    imprimir("Arreglo Resultante", arreglo);
    return 0;
}
