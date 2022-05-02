#include<stdio.h>
int main()
{
int a, b, sum=0, triple;
	printf("ENter a & b :");
	scanf("%d%d", &a, &b);
      sum=a+b;
      printf("Sum of a & b is: %d\n",sum);
      
      if(a==b)
      {
    
		triple=(a+b)*3;
      	printf("triple is %d",triple);
	  }
}
