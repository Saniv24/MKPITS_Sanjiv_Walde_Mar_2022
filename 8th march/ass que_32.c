#include <stdio.h>
#include <conio.h>
void main() 
{
   int pass;
   int i=10;
   
   while(i!=0)
   {
   printf("Enter password here:");
   scanf("%d",&pass);
   
   if(pass==1234)
   {
       printf("correct password\n");
       i=0;
   }
   else
   {
       printf("Incorrect password\n");
   }
   printf("\n");
   }
}



