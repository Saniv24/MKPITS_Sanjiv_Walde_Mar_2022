#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	
	if(a % 10 <= 2 || a % 10 >= 8)
	{
		printf("True");
	}
	else("False");
}
