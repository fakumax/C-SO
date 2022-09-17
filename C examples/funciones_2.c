#include <stdio.h>

double CaF(double);

int main(void) {
    double valor = 0.0;
    printf("Ingrese una temperatura en Celsius: ");
    scanf("%lf", &valor);
    printf("%f ", valor);
    printf("Su equivalente en Fahrenheit es: %f\n", CaF(valor));
    return 0;
}

double CaF(double v_celsius) {
    return v_celsius * 1.8 + 32.0;
}
