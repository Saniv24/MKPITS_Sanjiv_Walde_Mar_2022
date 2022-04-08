#include <stdio.h>
#include <math.h>

int main() 
{
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    
    if (a <= -0) 
    {
     if (a == 0)
     printf("You entered 0");
    else
    printf("You entered a negative number");
    } 
    else
    printf("You entered a positive number");
}

