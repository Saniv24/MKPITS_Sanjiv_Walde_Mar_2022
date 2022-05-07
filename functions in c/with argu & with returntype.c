#include<stdio.h>
int fun1(int ,int );

void main()
{
	int a=2, b=4, res;
	res=fun1(a,b);
	printf("%d",res);
}
int fun1(int x, int y)
{
	int r;
	r=x+y;
	return r;
}
