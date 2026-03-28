#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],x,k,j;
    printf("Type any 5 numbers:");
    for(k=0;k<=4;k++)
    scanf("%d",&a[k]);
    for(k=0;k<=4;k++)
    {
    for(j=k+1;j<=4;j++)
    {
        if(a[k]>a[j])
        {
            x=a[k];
            a[k]=a[j];
            a[j]=x;
        }
    }
 }
    printf("Numbers in ascending order:\n\n");
    for(k=0;k<=4;k++)
    printf("%d\t",a[k]);
    getch();
    }
