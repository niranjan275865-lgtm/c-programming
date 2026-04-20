#include <stdio.h>

int main() {
    int a[5] = {2, 4, 6, 8, 10};
    int key = 6, i, found = 0;

    for (i = 0; i < 5; i++) {
        if (a[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element found at position %d\n", i + 1);
    else
        printf("Element not found\n");

    return 0;
}