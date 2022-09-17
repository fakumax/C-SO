#include <stdio.h>
#define FILAS 2
#define COLUMNAS 3

void imprimir(int v[][COLUMNAS]) {
    int i, j;
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            printf("[%d][%d] = %d\n", i, j, v[i][j]);
        }
    }
}

int main(void) {
    int M[FILAS][COLUMNAS] = {{10, 5, 0}, {3, 6, 9}};
    imprimir(M);
    return 0;
}