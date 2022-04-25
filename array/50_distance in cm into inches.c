#include<stdio.h>
int main()
{
  float cm, inch;
  
  printf("Enter distance:");
  scanf("%f",&cm);
  
  inch=cm/2.54;
  
  printf("Distance in inch is:%f",inch);
}


