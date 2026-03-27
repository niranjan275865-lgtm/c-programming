#include<stdio.h>
int main()
{
int a[5],k,s=0;
printf("Type any 5 numbers:");
for(k=0;k<=4;k++)
scanf("%d",&a[k]);
for(k=0;k<=4;k++)
s=s+a[k];
printf("Sum:%d",s);
return 0;
}
