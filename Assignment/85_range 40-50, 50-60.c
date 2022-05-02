#include<stdio.h>
int main()
{
    int n, n1;
    
    printf("Enter any number:");
    scanf("%d%d",&n,&n1);
    
    if(n>=40 && n<=50 && n1>=40 && n1<=50 || n>=50 && n<=60 && n1>=50 && n1<=60)
    {
        printf(" are in range");
    }
    
    else
    {
        printf("not in range");
    }
}
