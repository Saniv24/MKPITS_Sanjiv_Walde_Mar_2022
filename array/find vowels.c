#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int  i, vowels=0;
	printf("Enter string :");
	scanf("%s",a);
	
	for(i=0; a[i]!='\0'; i++)
	if(a[i]=='a'|| a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
     {
     vowels=vowels+1;	
	 }
	 
	 printf("Vowels are: %d",vowels);
}
