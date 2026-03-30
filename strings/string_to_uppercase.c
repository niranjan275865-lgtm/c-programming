/***************************************************************
 
 strupr(): To convert the given string from lower to upper case
 
 ***************************************************************/


#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20];
    
    printf("Type name in lower case:");
    gets(a);
    
    printf("Name in upper case:%s", strupr(a));
    
    getch();
}
