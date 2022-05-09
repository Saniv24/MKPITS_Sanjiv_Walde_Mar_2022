#include<stdio.h> //with argu with return

int Evensum(n, n1, n2,n3, n4)
{
	int sum=0;
	
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
	return(sum);
}
int main()
{
	int a, b, c, d, e, s;
	printf("Enter 5 number:");
	scanf("%d%d%d%d%d",&a, &b, &c, &d, &e);
	s=Evensum(a, b, c, d, e);
	printf("sum of even no.:%d",s);
}
