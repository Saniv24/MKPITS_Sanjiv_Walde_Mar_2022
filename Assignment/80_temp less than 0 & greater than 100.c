#include<stdio.h>
int main()
{
   int  temp1, temp2;
   printf("Enter temperature here:");
   scanf("%d%d",&temp1,&temp2);
   
   if(0>temp1||temp2>100)
   {
       printf("Temp is less than is 0");
       
   }
   else 
   {
       printf("Temp is not less than 0\n");
   }
    if(temp2>100)
   {
       printf("Temp is greater than is 100 ");
       
   }
   else 
   {
       printf("Temp is not greater than 100");
   }
}
