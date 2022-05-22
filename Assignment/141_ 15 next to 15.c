#include<stdio.h>
int main()
{
    int a[20],i;
    printf("Enter values :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==15 && a[i]==a[i+1])
        {
            printf("True");
            break;
        }
        else
        {
            printf("False");
            break;
        }
    }
}
