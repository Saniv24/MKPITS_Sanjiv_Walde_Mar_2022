#include<stdio.h>
int main()
{
   int i, d;
   
   printf("Enter any number:");
   scanf("%d",&d);
   printf("diviser is %d:",d);
   
   for(i=1; i<=d; i++)
   {
       if((d%i==0))
       {
           printf("%d\n",i);
            printf("\n");
       }
      
   }
}

