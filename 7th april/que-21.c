#include <stdio.h>
#include <conio.h>

int main() 
{
   int a;
   printf("\nEnter any number");
   scanf("%d",&a);
   
   //consider the range specified bet:[0-20,21-40,41-60,61-80]
   if(a>=0 &&  a<=20)
   {
       printf("The range bet 0-20\n");
   }
   else if(a>=21 && a<=40)
   {
       printf("The range bet 21-40\n");
   }
   else if(a>=41 && a<=60)
   {
       printf("The range bet 41-60\n");
   }
   else if(a>=61 && a<=80)
   {
       printf("The range bet 61-80");
   }
}
