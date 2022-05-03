#include<stdio.h>
void fun1();
void add(int , int );
void main()
{
	int a, b;
	printf("Enter a & b here:");
	scanf("%d%d",&a, &b);
	add(a,b);
}

void add(int x, int y)
{
	int r;
	r=x+y;
	printf("Sum of x & y is :%d",r);
}
