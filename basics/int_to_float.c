#include <stdio.h>
int main(){
    int a = 10;
    float b = a;  // Implicit type conversion

    printf("Integer value: %d\n", a);
    printf("Float value: %.2f", b);

    return 0;
}