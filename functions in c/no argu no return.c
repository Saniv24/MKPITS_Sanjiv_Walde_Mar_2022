#include<stdio.h>
void add();
void add()
{
	int a, b, sum;
	printf("Enter valuse of a & b:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum is: %d",sum);
}
void main()
{
  add();	
}
