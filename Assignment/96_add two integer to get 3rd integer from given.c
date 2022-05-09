#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter 3 number");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a==b+c || b==a+c || c==b+a)
	{
		printf("Possible");
	}
	else
	{
		printf("Not possible");
	}
}
