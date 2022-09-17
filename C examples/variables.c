#include <stdio.h>

int main(void) {
    printf("Tamaño de tipos de datos expresados en bytes:\n\n");

    printf("ENTEROS SIN SIGNO:\n");
    printf("\tunsigned char      %lu\n", sizeof(unsigned char));
    printf("\tunsigned short     %lu\n", sizeof(unsigned short));
    printf("\tunsigned           %lu\n", sizeof(unsigned));
    printf("\tunsigned long      %lu\n", sizeof(unsigned long));
    printf("\tunsigned long long %lu\n", sizeof(unsigned long long));

    printf("\nENTEROS CON SIGNO:\n");
    printf("\tsigned char        %lu\n", sizeof(signed char));
    printf("\tshort              %lu\n", sizeof(short));
    printf("\tint                %lu\n", sizeof(int));
    printf("\tlong               %lu\n", sizeof(long));
    printf("\tlong long          %lu\n", sizeof(long long));

    printf("\nDECIMALES:\n");
    printf("\tfloat              %lu\n", sizeof(float));
    printf("\tdouble             %lu\n", sizeof(double));
    printf("\tlong double        %lu\n", sizeof(long double));

    printf("\nCARACTER:\n");
    printf("\tchar               %lu\n", sizeof(char));

    printf("\nLOGICO:\n");
    printf("\t_Bool              %lu\n", sizeof(_Bool));

    return 0;
}
