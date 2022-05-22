#include<stdio.h>
int main()
{
   float p, q, r, s, average, sum=0;
   printf("Enter values :");
   scanf("%f%f%f%f",&p, &q, &r, &s);
   sum=p+q+r+s;
   average=sum/4;
   printf("average of the input is : %f",average);
}
