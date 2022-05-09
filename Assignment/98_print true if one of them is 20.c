#include<stdio.h>
int main()
{
	int n1, n2, n3;
	printf("Enter 3 number:");
	scanf("%d%d%d", &n1, &n2, &n3);
	
	if(n1==20 || n2==20 || n3==20)
	{
		printf("True");
	}
	else if((n1 - n2) >= 20 || (n1 - n3) >= 20 || (n2 - n3) >= 20)
	{
		printf("True");
	}
                   
	else
	{
		printf("False");
	}
}
