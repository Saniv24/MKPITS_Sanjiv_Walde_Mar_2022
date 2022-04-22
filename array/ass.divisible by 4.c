#include<stdio.h>
void main()
{
	int a[5];
	int i;
	printf("Enter any 5 number:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=4;i++)
	{
	if(a[i]%4==0)	
	{
    printf("no. is divisible by 4 is: %d\n",a[i]);
   }
  }
}
