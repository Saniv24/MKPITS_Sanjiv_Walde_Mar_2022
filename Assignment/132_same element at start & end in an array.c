#include<stdio.h>
int main()
{
    int a[5], i;
    printf("Enter values:");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==5 && a[i+4]==5)
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
