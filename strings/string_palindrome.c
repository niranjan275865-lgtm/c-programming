/******************************************************
   palindrome: A palindrome is something that reads The
               same forward and backward.
*******************************************************/   
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    clrscr();
    
    printf("Type any word:");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
       printf("palindrome");
    else
       printf("Not palindrome:");
    getch();
}
