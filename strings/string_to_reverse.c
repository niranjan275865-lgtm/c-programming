/******************************************************
   strrev() : To display the given string reverse order
*******************************************************/   
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20];
    clrscr();
    printf("Type any name:");
    gets(a);
    
    printf("The given name in the reverse order:%s",strrev(a));
    
    getch();
}
   
