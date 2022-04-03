#include <stdio.h>
#include <conio.h>
int main()
{
float pi=3.14;
float r, t, v;
printf("Enter the value of radius:");
scanf("%f",&r);
printf("Enter the value of t:");
scanf("%f",&t);
v=2*pi*r/t;
printf("Tangential velocity is:",v);
}
