#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[2][2],m2[2][2],trans[2][2],i,j;
	printf("Enter 2x2 matrix m1\n:");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m1[%d][%d]=",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	
		for(i=0;i<=1;i++)
		{
			for(j=0;j<=1;j++)
			{
				trans[j][i]=m1[i][j];
			}
		}
		//display
		for(i=0;i<=1;i++)
		{
			for(j=0;j<=1;j++)
			{
				printf("\ntrans[%d][%d]=%d",i,j,trans[i][j]);
			}
		}
	
}
