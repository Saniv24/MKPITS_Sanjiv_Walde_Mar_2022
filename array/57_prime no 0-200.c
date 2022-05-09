#include<stdio.h>
void main()
{
	int n,i,d;
	for( n=0;n<=200;n++)
	{
	d=0;
	i=2;
	while(n>i)
	{
		if(n%i==0)
		{
			d=1;
			
		}
		i=i+1;
	}
		if(d==0)
		{
			printf("%d ",n);
		}
    }

}
