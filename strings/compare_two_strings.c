/*************************************************************************************************
 
 strcmp(): it is useful to compare two strings.if the two strings are equal.then it displays equal
           otherwise it displays not equal.
            
                             SYNTAX:
                strcmp(string variable 1, string variable 2)

***************************************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    
printf("Type first name:");
scanf("%[^\n]", &a);

printf("Type second name:");
scanf(" %[^\n]", &b);  // space handles leftover newline

if(strcmp(a,b) == 0)

    printf("Equal");
    
    else
    printf("Not equal");

getch();

}
