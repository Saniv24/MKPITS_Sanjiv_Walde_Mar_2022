#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	
	if(a%3==0 || a%7==0)
	{
		printf("Multiple");
	}
	else 
	{
		printf("Not multiple");
	}
	
}
