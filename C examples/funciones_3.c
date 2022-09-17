#include <stdio.h>

int factorial(int valor) {
    int i, j;
    for (i = 1, j = 1; i <= valor; j *= i, i++)
        ;
    return j;
}

int rFactorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * rFactorial(n - 1);
}

int main(void) {
    printf("Factorial de cinco: %d, %d\n", factorial(5), rFactorial(5));
    return 0;
}
