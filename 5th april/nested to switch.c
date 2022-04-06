#include <stdio.h> 
#include <conio.h>
 void main() 
 {
     int choice, a,b,res;
    printf("press 1 for addition:\n");
    printf("press 2 for substraction:\n");
    printf("press 3 for multiplication:\n");
    printf("press 4 for division:\n");
    scanf("%d", &choice);
    switch(4)
    {
    
         case 1 :
         printf("enter 2 number");
		scanf("%d%d",&a,&b);
		res=a+b;
		printf("addition of number=%d",res);
         break;
         case 2 :
         printf("enter 2 number");
		scanf("%d%d",&a,&b);
		res=a-b;
		printf("substraction of number=%d",res);
         
         break;
         case 3 :
         printf("enter 2 number");
		scanf("%d%d",&a,&b);
		res=a*b;
		printf("multiplication of number=%d",res);
         break;
         case 4:
         printf("enter 2 number");
		scanf("%d%d",&a,&b);
		res=a/b;
		printf("division of number=%d",res);
         break;
         default:
         printf("invalid input");
    }

 }
    
 
 
