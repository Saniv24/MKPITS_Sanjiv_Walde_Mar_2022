#include<stdio.h>
int main()
{
  float p, ri, t, SI;
  
  printf("Enter principle:\n");
  scanf("%f",&p);
  printf("Enter rate of interest:\n");
  scanf("%f",&ri);
  printf("Enter time:");
  scanf("%f",&t);
  
  SI=(p*ri*t)/100;
  printf("Simple interest is: %f",SI);
}


