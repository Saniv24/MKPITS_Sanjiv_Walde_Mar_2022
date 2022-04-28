#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int i, count;
	printf("Enter any string :");
	scanf("%s", a);
	
	for(i=0; a[i]!='\0'; i++)
	{
		count=count+1;
	}
	printf("Lenght of the string is :%d",i);
}
