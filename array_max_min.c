#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],k,x,y;
printf("Type any 5 numbers:");
for(k=0;k<=4;k++)
scanf("%d",&a[k]);
x=a[0];
y=a[0];
for(k=0;k<=4;k++)
{
    if(x<a[k])
    x=a[k];
    if(y>a[k])
    y=a[k];
}
printf("Biggest value:%d\nSmallest value:%d",x,y);
getch();
}
