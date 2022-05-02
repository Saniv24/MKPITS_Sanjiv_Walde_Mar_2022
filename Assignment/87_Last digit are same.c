#include<stdio.h>
int main()
{
    int n, n1;
    
    printf("Enter two integer values:");
    scanf("%d%d",&n, &n1);
    
    if(n%10==n1%10)
    {
        printf("Last digit are same");
    }
    else
    {
        printf("Last digit are not same");
    }
}
