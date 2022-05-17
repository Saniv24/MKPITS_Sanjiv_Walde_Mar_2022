#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[25],b[25];
	int length;
	printf("enter any string\n");
	scanf("%s",a);
	strcpy(b,a);
	length=strlen(a);
	printf("\ncopied string\n%s \ncopied string length\n%d",b,length);
}
