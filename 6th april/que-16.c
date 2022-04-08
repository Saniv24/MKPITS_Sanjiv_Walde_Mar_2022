#include<stdio.h>
#include<conio.h>
void main()
{
	int a,t;
	printf("enter the amount");
	scanf("%d",&a);
	
	t=a/100;
	printf("%d note of 100Rs\n",t);
	
	a=a%100;
	t=a/50;
	printf("%d note of 50Rs\n",t);
	
	a=a%50;
	t=a/20;
	printf("%d note of 20Rs\n",t);
	
	a=a%20;
	t=a/10;
	printf("%d note of 10Rs\n",t);
	
	a=a%10;
	t=a/1;
	printf("%d note of 1RS\n",t);
	
}
