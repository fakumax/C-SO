#include <stdio.h>

int main(void) {
    int c;
    while ((c = getchar()) != 'A') {
        putchar(c);
    }
    return 0;
}