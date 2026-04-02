/******************************************************************************
 
 strcat(): it means string concatenation. it is useful to combine two strings
 
 ******************************************************************************/
 
 #include<stdio.h>
 #include<conio.h>
 #include<string.h
 int main()
 {
     char a[20],b[20];
     
     printf("Type first name:");
     gets(a);
     
     printf("Type last name:");
     gets(b);
     
     printf("The given name:%s",strcat(a,b));
     
     getch();
 }
