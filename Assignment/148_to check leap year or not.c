#include<stdio.h>
#include<conio.h>
int main()
{
   int n;
   printf("Enter Year to check if it is leap or not :");
   scanf("%d",&n);
   
   if(n%4==0 || n%100==0 || n%400==0)
   {
       printf("%d is leap Year",n);
   }
   else
   {
       printf("%d is not leap Year", n);
   }
}
