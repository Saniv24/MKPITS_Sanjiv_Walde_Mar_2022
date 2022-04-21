#include<stdio.h>
void main()
{
	int a[3];
	int i;
	printf("Enter any 3 number:");
	for(i=0;i<=2;i++)
	{
		
		scanf("%d",&a[i]);
	}
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
