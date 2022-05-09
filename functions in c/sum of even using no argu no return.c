#include<stdio.h>

void Evensum()
{
	int n, n1, n2, n3, n4, sum=0;
	printf("Enter 5 numbers:");
	scanf("%d%d%d%d%d",&n, &n1, &n2, &n3, &n4);
	
	if(n%2==0)
	{
		sum=sum+n;
	}
	if(n1%2==0)
	{
		sum=sum+n1;
	}
	if(n2%2==0)
	{
		sum=sum+n2;
	}
	if(n3%2==0)
	{
		sum=sum+n3;
	}
	if(n4%2==0)
	{
		sum=sum+n4;
	}
	
	printf("Sum of even no:%d",sum);
}

void main()
{
	Evensum();
}
