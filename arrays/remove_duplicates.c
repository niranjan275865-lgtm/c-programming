#include <stdio.h>

int main() {
    int a[6] = {1, 2, 2, 3, 4, 4};
    int i, j;

    printf("Array without duplicates:\n");

    for (i = 0; i < 6; i++) {
        for (j = i + 1; j < 6; j++) {
            if (a[i] == a[j])
                break;
        }
        if (j == 6)
            printf("%d ", a[i]);
    }

    return 0;
}
