#include <stdio.h>
#include <conio.h>
void main()
{
   float a, b, c, perimeter;
   printf("Enter 1st value: ");
   scanf("%f",&a);
   printf("Enter 2nd value: ");
   scanf("%f",&b);
   printf("Enter 3rd value: ");
   scanf("%f",&c);
   
   
   if(a<(c+b) && b<(a+c) && c<(a+b))
   {
       perimeter=a+b+c;
       printf("Perimeter is: %f",perimeter);
   }
   else{
       printf("Triangle is not making");
   }
   
}
