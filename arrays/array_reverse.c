#include<stdio.h>
int main()
{
    int a[5];
printf("Type any 5 numbers:");
scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
printf("Numbers in the reverse order:");
printf("%d%d%d%d%d",a[4],a[3],a[2],a[1],a[0]);
return 0;
}
