#include<stdio.h>

void Evensum(int n, int n1, int n2, int n3, int n4)
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
	 printf("sum of even no.:%d", sum);
}
void main()
{
	int a, b, c, d, e;
	printf("Enter 5 numbers:");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &d);
	
	Evensum(a, b, c, d, e);
}
