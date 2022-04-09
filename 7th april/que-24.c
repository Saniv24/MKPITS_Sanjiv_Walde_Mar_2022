#include <stdio.h>
#include <conio.h>
void main()
{
   int a, b;
   printf("Enter 1st number:");
   scanf("%d",&a);
   printf("Enter 2nd number:");
   scanf("%d",&b);
   
   if(b%a==0)
   {
       printf("Multiplied");
   }
   else
   {
       printf("Not Multiplied");
   }
   
}
