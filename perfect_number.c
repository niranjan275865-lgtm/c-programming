#include <stdio.h>

int main() {
    int n = 6, i, sum = 0;

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("Perfect Number\n");
    else
        printf("Not Perfect Number\n");

    return 0;
}