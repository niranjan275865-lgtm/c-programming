#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],k,x;
printf("Type any 5 numbers:");
for(k=0;k<=4;k++)
scanf("%d",&a[k]);
x=a[0];
for(k=0;k<=4;k++)
{
    if(x<a[k])
    x=a[k];
}
printf("Biggest value:%d",x);
getch();
}
