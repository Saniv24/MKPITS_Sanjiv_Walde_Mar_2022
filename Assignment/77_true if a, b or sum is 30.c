#include<stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter 1st no.:");
    scanf("%d",&a);
    printf("Enter 2nd no.:");
    scanf("%d",&b);
   sum=a+b;
    
    if(a==30||b==30||sum==30)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
