#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	
	strcpy(name, "Sanjiv");
	if(strcpy(name,"Walde")==0)
	{
		printf("\nWelcome");
	}
	else
	{
		printf("\nBye");
	}
	
}
