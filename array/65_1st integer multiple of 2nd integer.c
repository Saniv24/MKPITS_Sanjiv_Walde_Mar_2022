#include<stdio.h>
int main()
{
	int num, num1;
	printf("Enter two integer number:\n");
	scanf("%d%d", &num,&num1);
	
	if(num%num1==0)
	{
		printf("First integer is multiple of second integer");
	}
	else
	{
		printf("First integer is not multiple of second integer");
	}
}
