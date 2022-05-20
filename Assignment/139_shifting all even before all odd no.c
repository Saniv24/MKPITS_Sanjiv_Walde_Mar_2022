#include<stdio.h>
int main()
{
    int a[20], i, x=0, temp;
    printf("Enter values :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            temp=a[x];
            a[x]=a[i];
            a[i]=temp;
            x=x+1;
        }
    }
    printf("New array is :");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}
