#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char x[] = "AAAB101010";
    size_t largo;
    int i;

    printf("%d\n\n\n", atoi(x));
    largo = strlen(x);
    for (i = 0; i < largo; i++) {
        printf("%d %c\n", isdigit(x[i]), x[i]);
    }
    return 0;
}