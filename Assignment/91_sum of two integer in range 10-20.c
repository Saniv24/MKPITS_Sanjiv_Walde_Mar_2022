

#include<stdio.h>
int main()
{
    int n, n1, sum=0;
    printf("Enter any two number:");
    scanf("%d%d",&n, &n1);
    sum=n+n1;
    printf("Sum is:%d\n\n",sum);
    
    if(sum>=10 && sum<=20)
    {
        printf("30");
    }
}
