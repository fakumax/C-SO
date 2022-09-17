#include <stdio.h>

int main(void) {
    int M[2][3] = {
        {10, 5, 0},
        {3, 6, 9}};
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("M[%d][%d] = %d\n", i, j, M[i][j]);
        }
    }
    return 0;
}