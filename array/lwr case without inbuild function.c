#include<stdio.h>
#include<string.h>
int main()
{
	char a[30];
	int i;
	
	printf("Enter string :");
	scanf("%s",a);
	
	
	for(i=0; a[i]; i++)
	{
	
		if(a[i]>='A' && a[i]<='Z')
		a[i]=a[i]+32;
	}
	printf("Upper case of string is:%s",a);
}
