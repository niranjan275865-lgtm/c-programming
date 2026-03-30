/******************************************************
  %[^\n] : To accept a string including a blank spaces 
 ******************************************************/



#include<stdio.h>
#include<conio.h>
int main()
{
    char n [10];
    
    printf("Type any name:");
     scanf("%[^\n]",&n);
    
    
    printf("Name:%s",n);
    
    getch();
}
