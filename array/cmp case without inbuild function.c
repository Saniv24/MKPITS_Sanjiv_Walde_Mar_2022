#include<stdio.h>
#include<string.h>
int main()
{
	char a[30], b[30];
	int i;
	
	printf("Enter a string: ");
	printf("Enter b string: ");
	scanf("%s%s", a,b);
	
	for(i=0; a[i]==b[i] && a[i]=='\0'; i++);
	{
		if(a[i]> b[i])
		{
			printf("String a is greater ");
		}
		else if(a[i]<b[i])
		{
			printf("String b is greater ");
		}
		else
		{
			printf("Both string are same");
		}
	}
}
