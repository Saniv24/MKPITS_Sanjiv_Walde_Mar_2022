#include <stdio.h>
#include <conio.h>
int main()
{
float mass, volume, density;
printf("Enter volume and density");
scanf("%f %f", &volume, &density);
mass=volume*density;
printf("mass=%f",mass);
}