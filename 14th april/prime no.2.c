#include<stdio.h>
int main()
{
    int n, i=1, count=0;
    printf("Enter number:");
    scanf("%d",&n);
    
    while(n>=i)
    {
        if(n%i==0)
        {
        count++;
        }
        i=i+1;
    }
    if(count==2)
    {
        printf("%d is a prime no.",n);
    }
    else{
        printf("%d is not a prime no.",n);
    }
}
