#include<stdio.h>
int main()
{
    int num;
    printf("ENter any integer no.:");
    scanf("%d",&num);
    
    if(num%3==0 || num%7==0)
    {
        printf("num is multiple of 3 or 7");
    }
    else
    {
        printf("num is not multiple of 3 & 7");
    }
}
