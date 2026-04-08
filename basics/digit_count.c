#include <stdio.h>
int main(){
    int n=123,c=0;
    while(n){
        c++;
        n/=10;
    }
    printf("%d",c);
    return 0;
}