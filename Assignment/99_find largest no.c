#include<stdio.h>
void fun(int , int );

void main()
{
	int a, b;
	printf(" Enter two integer number:\n");
	scanf(" %d%d", &a, &b);
	fun(a, b);
}
void fun(int n, int n1)
{
	if(n==n1)
	{
		printf(" return 0");
	}
	else if(n%5==n1%5 && n<n1 || n>n1)
	{
		printf(" n is smallest");
	}
	else
	{
		printf(" n1 is smallest");
	}
}

