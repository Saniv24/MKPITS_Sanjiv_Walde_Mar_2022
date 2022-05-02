#include<stdio.h>
int main()
{
    int n, n1;
    printf("Enter three numbers:");
    scanf("%d%d",&n, &n1);
    
    if(n>=20 && n<=50 || n1>=20 && n1<=50 )
    
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
