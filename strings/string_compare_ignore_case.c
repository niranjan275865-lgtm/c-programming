/*******************************************************************************
 
 strcat(): it means string concatenation. it is useful to combine two strings
 
 ******************************************************************************/
 
 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 int main()
 {
     char a[20],b[20];
     clrscr();
     printf("Type first name:");
     gets(a);
     
     printf("Type last name:");
     gets(b);
     
     if(strcmpi(a,b)==0)
     printf("Equal");
     else
     printf("Not equal");
     
     getch();
 }
