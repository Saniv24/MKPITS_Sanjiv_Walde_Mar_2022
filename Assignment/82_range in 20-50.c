#include<stdio.h>
int main()
{
    int n, n1, n2;
    printf("Enter three numbers:");
    scanf("%d%d%d",&n, &n1, &n2);
    
    if(n>=20 && n<=50 || n1>=20 && n1<=50 || n2>=20 && n2<=50)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
