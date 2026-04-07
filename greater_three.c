#include <stdio.h>
int main(){
    int a=5,b=8,c=3;
    if(a>b && a>c) printf("%d",a);
    else if(b>c) printf("%d",b);
    else printf("%d",c);
    return 0;
}