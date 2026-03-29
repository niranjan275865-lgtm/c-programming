#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],x,k;
    printf("Type any 5 numbers:");
    for(k=0;k<=4;k++)
    scanf("%d",&a[k]);
    printf("Type searching number:");
    scanf("%d",&x);
    for(k=0;k<=4;k++)
    {
        if(x==a[k])
        {
        printf("found");
        goto xyz;
        }
    }
    printf("Not found");
    xyz:
    getch();
}
