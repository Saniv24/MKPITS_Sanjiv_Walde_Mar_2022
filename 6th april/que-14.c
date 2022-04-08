#include <stdio.h>
#include <conio.h>
void main()
{
    int distance;
    float fuel, ave;
    printf("Total traveled distance in km: ");
    scanf("%d",&distance);
    printf("Total fuel consumption:");
    scanf("%f",&fuel);
    ave=distance/fuel;
    
    printf("Average of the bike is:%f",ave);
}
