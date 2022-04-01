#include <stdio.h>
#include <conio.h>
int main()
{
float force, mass, acceleration;
printf("Enter mass and acceleration");
scanf("%f %f", &mass, &acceleration);
force=mass*acceleration;
printf("force=%f",force, mass, acceleration);
}