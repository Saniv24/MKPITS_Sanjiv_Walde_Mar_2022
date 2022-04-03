#include <stdio.h>
#include <conio.h>
int main()
{
float voltage, current, resistance;
printf("Enter current and resistance:");
scanf("%f %f", &current, &resistance);
voltage=current*resistance;
printf("voltage=%f", voltage);
}