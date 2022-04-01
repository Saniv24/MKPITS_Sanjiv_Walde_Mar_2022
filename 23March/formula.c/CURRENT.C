#include <stdio.h>
#include <conio.h>
int main()
{
float current, voltage, resistance;
printf("Enter voltage and resistance:");
scanf("%f %f",voltage, resistance);
current=voltage/resistance;
printf("current=%f", current, voltage, resistance);
}