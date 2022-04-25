#include<stdio.h>
int main()
{
	int a[7],i,j;
	printf("enter element");
	for(i=0;i<7;i++)
	{
		scanf("%d",&j);
		if(j>0)
		{
			a[i]=j;
		}
		else
		{
			a[i]=100;
		}
	}
	
	printf("value of array \n");
	for(i=0;i<7;i++){
	printf("a[%d]=%d\n",i,a[i]);
}
}
