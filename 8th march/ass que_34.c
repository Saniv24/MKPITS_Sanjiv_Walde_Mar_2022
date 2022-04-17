#include <stdio.h>
#include <conio.h>
void main() 
{
   float a, b, result;
   printf("Enter two numbers:");
   scanf("%f %f",&a,&b);
   
   if(b!=0)
   {
       result=a/b;
       printf("%f\n",result);
   }
   else{
       printf("Division not possible");
   }
}





