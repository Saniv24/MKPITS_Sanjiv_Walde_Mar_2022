#include<stdio.h>
int main()
{
    int r, c, n=4;
    
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        printf("*");
        printf("\n");
    }
    for(r=3; r>=1; r--)
    {
        for(c=1; c<=r; c++)
        printf("*");
        printf("\n");
    }
}
