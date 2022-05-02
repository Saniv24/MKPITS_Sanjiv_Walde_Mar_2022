#include<stdio.h>
int main()
{
    int n, x=51, diff;
    printf("ENter value of n:");
    scanf("%d",&n);
    diff=x-n;
    
    printf("difference bet 51 and n is:%d\n",diff);
    if(n>x)
    {
         printf("triple of absolute difference:%d",(n-x)*3);
    }
    
}
