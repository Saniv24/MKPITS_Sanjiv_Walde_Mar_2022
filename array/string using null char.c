#include<stdio.h>
int main()
{
    int i;
	char name [10];
	printf("Enter name here:");
	scanf("%s",name);
	
	for(i=0;name[i]!='\0';i++)
	{
	printf("%c ",name[i]);
	}
}
