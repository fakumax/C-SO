#include <stdio.h>

int main(void) {
    int a;
    printf("Ingrese día de la semana: ");
    scanf("%d", &a);
    switch (a) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Día laboral.\n");
            break;
        case 6:
        case 7:
            printf("Día no laboral.\n");
            break;
        default:
            printf("Error.\n");
    }
}