#include<stdio.h>
#include<string.h>
int main()
{
	char name[20]="SANJIV";
	
	strlwr(name);
	
	printf("Given name in lowe case is: %s", name);
}
