/******************************************************
   strlen(): To find out the length of the given string
*******************************************************/   
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20];
    int n;
    clrscr();
    printf("Type any name:");
    gets(a);
    n=strlen(a);
    
    printf("The given name is:%d characters",n);
    
    getch();
}
   
