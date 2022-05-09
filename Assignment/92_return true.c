#include<stdio.h>
int main()
{
	float a, b;
	printf("Enter a numbers:");
	scanf("%f",&a);
	printf("Enter a numbers:");
	scanf("%f",&b);
	
	if(a==5 || b==5)
	{
		printf("True");
	}
	else if(a+b==5)
	{
		printf("True");
	}
	else if(a-b==5 || b-a==5)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
