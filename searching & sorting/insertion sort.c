#include<stdio.h>
int main()
{
    printf("Enter n values:");
    int i,j, temp=0, a[5];
  for(i=1;i<=5;i++)
{
    scanf("%d",&a[i]);
  temp=a[i];
 j=i-1;
while(i>=0 && a [ j ]>temp)
{
a[ j+1]=a[j];
j--;
}
a[ j+1]=temp;
}
  printf("after sorting 5 element:");
		for(i=0;i<=5;i++)
	{
		printf("%d ",a[i]);
	}
}
