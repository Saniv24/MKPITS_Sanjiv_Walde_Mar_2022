#include <stdio.h>
void main() 
{
  int n, cube, r, temp, sum=0;
 
  printf("Enter any no.:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
     r=n%10; 
     cube=r*r*r;
     sum=sum+cube;
      n=n/10;
  }
  n=temp;
  if(n==sum)
  {
      printf(" is an armstrong no.");
  }
  else{
      printf(" is not an armstrong no.");
  }
}
