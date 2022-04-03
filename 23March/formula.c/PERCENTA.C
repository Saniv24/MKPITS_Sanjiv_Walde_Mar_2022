#include <stdio.h>
#include <conio.h>
void main()
{
float a, b, c;
printf("Percentage formula is : (value/total value)*100\n");
printf("a=value \n b=total value \n");
printf("Enter value:");
scanf("%f",&a);
printf("Enter total value :");
scanf("%f",&b);
c=(a/b)*100;
printf("%f",c);
}