#include<stdio.h>
int main()
{
    int a[20], b[20], i, j, count=0;
    printf("Enter values :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==0)
        count=count+1;
    }
    j=0;
    for(i=0;i<5;i++)
    {
        if(a[i]==0)
        {
            b[j]=0;
            j++;
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i]!=0)
        {
            b[j]=a[i];
            j++;
        }
    }
    printf("New array is :\n");
    for(i=0;i<5;i++)
    {
        printf("%d",b[i]);
    }
}
