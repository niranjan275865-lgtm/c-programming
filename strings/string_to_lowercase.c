/**********************************************************************
 
 strupr(): To convert the given string from upper case to lower case
 
 **********************************************************************/


#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20];
    
    printf("Type name in upper case:");
    gets(a);
    
    printf("Name in lower case:%s", strlwr(a));
    
    getch();
}
