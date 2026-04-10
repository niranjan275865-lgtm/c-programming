#include <stdio.h>
int main(){
    float f = 98.6, c;
    c = (f - 32) * 5 / 9;
    printf("Celsius: %.2f", c);
    return 0;
}