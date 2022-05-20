#include<stdio.h>
int main()
{
    int x, y, res1, res2;
    printf("Enter x & y :");
    scanf("%d%d", &x, &y);
    res1=x-100;
    res2=y-100;
    if(res1>res2)
    {
        printf("%d x is nearest to 100",x);
    }
    else if(res2>res1)
    {
        printf("%d y is nearest to 100",y);
    }
    else
    {
        printf("0");
    }
}
