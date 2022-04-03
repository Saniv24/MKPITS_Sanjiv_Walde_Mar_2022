#include <stdio.h>
#include <conio.h>
int main()
{

float	 speed, distance, time;
printf("Enter distance and time");
scanf("%f %f",&distance,& time);
speed=distance/time;
printf("speed=%f", speed);
}