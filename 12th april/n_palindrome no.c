#include <stdio.h>
void main() 
{
  int n, r,temp, sum=0;
  printf(" Enter number:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
	  r=n%10;
	   sum=sum*10+r;
	   n=n/10;
  } 
  n=temp;
    if(n==sum)
    {
        printf("%d is a palindrome no",sum);
    }
    else{
        printf("%d is not palindrome no.",sum);
    }
}
