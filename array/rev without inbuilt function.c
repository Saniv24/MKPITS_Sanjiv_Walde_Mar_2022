#include<stdio.h>
#include<string.h>
int main()
{
	char a[30], swap;
	int i, l;
	
	printf("Enter string here: ");
	scanf("%s", a);
	
	for(l=0; a[l]; l++);
	
	for(i=0; i<l/2; i++)
	{
		swap=a[i];
		a[i]=a[l-1-i];
		a[l-1-i]=swap;
	}
	printf("Reverse of string :%s",a);
}
