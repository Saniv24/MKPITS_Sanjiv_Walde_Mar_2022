#include<stdio.h>
#include<conio.h>
int main()
{
   int age;
   printf("Enter age to check eligibility to vote :");
   scanf("%d",&age);
   
   if(age>18)
   {
       printf("He/She is eligible to vote casting");
   }
   else
   {
       printf("He/She is not eligible to vote casting");
   }
}
