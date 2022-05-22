#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter integer here :");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(i==1||i==5||j==1||j==3)
            {
            printf("%d ",n);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
