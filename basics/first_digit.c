#include <stdio.h>
int main(){
    int n=123;
    while(n>=10) n/=10;
    printf("%d",n);
    return 0;
}