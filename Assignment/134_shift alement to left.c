#include<stdio.h>
int main()
{
    int a[10], n, i, temp;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter values :\n");
    for(i=0;i<=n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    temp=a[0];
    for(i=1;i<=n-1; i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=temp;
    printf("After shifting :\n");
    for(i=0;i<=n-1; i++)
    printf("%d\n", a[i]);
}
