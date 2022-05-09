#include<stdio.h>
int main()
{
    int a[6], i, temp;
    printf("Enter any 6 integer no.:\n");
    for(i=0;i<=5;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=2;i++)
    {
        temp=a[i];
        a[i]=a[5-i];
        a[5-i]=temp;
    }
    printf("Element of an array\n");
    for(i=0;i<=5;i++)
    {
        printf(" %d",a[i]);
    }
}
