#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][2],b[2][2];
    
    printf("Type any 4 numbers for A matrix:");
    scanf("%d%d%d%d", &a[0][0],&a[0][1],&a[1][0],&a[1][1]);
    
    printf("Type any 4 numbers for B matrix:");
    scanf("%d%d%d%d",&b[0][0],&b[0][1],&b[1][0],&b[1][1]);
    
    printf("Addition of Two matrix:\n");
    printf("%d\t\t%d\n\n%d\t\t%d\n\n",a[0][0]+b[0][0],a[0][1]+b[0][1],a[1][0]+b[1][0],a[1][1]+b[1][1]);
    
    getch();
}
