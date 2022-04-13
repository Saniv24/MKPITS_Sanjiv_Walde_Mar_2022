#include<stdio.h>
void main()
{
   int num, i; 
   int fact=1;
    i=1;
   printf("Enter number:");
   scanf("%d",&num);
   
   
   while(i<=num)
   {
       fact=fact*i;
       
       i++;
   }
   
   printf("Factor is:%d=%d",num, fact);
}
