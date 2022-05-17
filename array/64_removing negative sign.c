#include<stdio.h>
#include<conio.h>
int main()
{
	int a, result=0;
	printf("enter any negative no\n");
	scanf("%d",&a);
	if(0>a)
	{
		result=a*(-1);
	}
	printf("result=%d",result);
}
