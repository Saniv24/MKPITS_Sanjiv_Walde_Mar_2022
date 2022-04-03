#include <stdio.h>
#include <conio.h>
int main()
{
float resistance, current, voltage;
printf("Enter voltage and current:");
scanf("%f %f", &voltage, &current);
resistance=voltage/current;
printf("resistance=%f", resistance);
}