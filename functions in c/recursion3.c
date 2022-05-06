#include<stdio.h>

void fun();
int main()
{
	 fun(1);
}
void fun(int a)
{

	
	if(a==10)
	return ;
	printf("%d",a);

	
	fun(a+1);
	printf("%d\n",a);
}
