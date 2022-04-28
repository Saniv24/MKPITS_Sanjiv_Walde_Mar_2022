#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char a[20], b[20];
   int s;
   
   printf("Enter any name :");
   scanf("%s",a);
   
   strcpy(b,a);
   
   strrev(a);
   
   s=strcmp(b,a);
   
   if(s==0)
   {
   	printf("%s is palindrome name",b);
   }
   else
   {
   	printf("%s is not palindrome name",b);
   }
   
}

