#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][2],b[2][2],r,c;
    
    printf("Type any 4 numbers for A matrix:");
    for(r=0;r<=1;r++)
    for(c=0;c<=1;c++){
    scanf("%d",&a[r][c]);
    }
    
    printf("Type any 4 numbers for B matrix:");
    for(r=0;r<=1;r++)
    for(c=0;c<=1;c++){
    scanf("%d",&b[r][c]);
    }
    
    printf("Addition of 2 matrices:\n");
    for(r=0;r<=1;r++)
    for(c=0;c<=1;c++)
    {
    printf("%d\t", a[r][0]*b[0][c]+a[r][1]*b[1][c]);
    
    if(c==1)
    printf("\n");
    }
    getch();
}
    
