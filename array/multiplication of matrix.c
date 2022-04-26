#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j, k, sum=0;
	printf("Enter 2x2 matrix m1\n:");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m1[%d][%d]=",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter 2x2 matrix m2\n:");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m2[%d][%d]=",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0; i<=1; i++)
	{
	    for(j=0; j<=1; j++)
	    {
	        sum=0;
	        for(k=0;k<=1;k++)
	        sum=sum+m1[i][k]*m2[k][j];
	        m3[i][j]=sum;
	    }
	}
		
		
		//display
		for(i=0;i<=1;i++)
		{
			for(j=0;j<=1;j++)
			{
				printf("\n%d",m3[i][j]);
			}
		}
	
}
