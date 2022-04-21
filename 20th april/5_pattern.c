#include<stdio.h>
int main()
{
	int r, c;
	
	for(r=4; r>=1; r--)
	{
		char alpha='A';
		for(c=1; c<=r; c++)
		{
			printf("%c", alpha);
			alpha++;
		}
		printf("\n");
	}
}
