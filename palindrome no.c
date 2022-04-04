#include<stdio.h>
#include<conio.h>

void main()
{
	int num,n,n1,n2,n3,result;
	
	printf("enter three digit number:");
	scanf("%d",& num);
	
	n1=num%10;
	n=num/10;
	n2=n%10;
	n=n/10;
	n3=n%10;
	result=(n1*100+n2*10+n3*1);
		
	if(result==num)
	{
		printf("%d is palindrom number",num);
	}
	
	else
	{
		printf("%d is not palindrom number",num);
	}
}
