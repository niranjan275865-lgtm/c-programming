#include<stdio.h>
#include<conio.h>
 int main()
{
int a[5],k,EC=0,OC=0;
printf("Type any 5 numbers:");
for(k=0;k<=4;k++)
scanf("%d",&a[k]);
for(k=0;k<=4;k++)
{
    if(a[k]%2==0)
    EC=EC+1;
    else
    OC=OC+1;
}
printf("Total even numbers:%d\nTotal odd numbers:%d",EC,OC);
getch();
}
