#include<stdio.h>
#include<conio.h>
int main()
{
    float Celsius, kelvin, Fahrenheit;
    printf(" Enter Temprature in celcius :");
    scanf("%f",&Celsius);
    
    kelvin=273.15 + Celsius;
    Fahrenheit=1.8*Celsius+32;
    
    printf(" Celsius to kelvin  %fk\n",kelvin);
    printf(" Celsius to Fahrenheit %ff",Fahrenheit);
    
}
