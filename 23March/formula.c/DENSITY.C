#include <stdio.h>
#include <conio.h>
int main()
{
float  density, mass, volume;																																	 density, mass, volume;
printf("Enter mass and volume");
scanf("%f %f",&mass, &volume);
density=mass/volume;
printf("density=%f", density);
}