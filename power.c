#include <stdio.h>

int main() {
    int base = 2, exp = 3, i;
    int result = 1;

    for (i = 1; i <= exp; i++) {
        result *= base;
    }

    printf("Result = %d\n", result);
    return 0;
}