#include<stdio.h>
int main()
{
    float i, sum=0;
    
    printf("Result of length 1-50 is:");
   
    for(i=1; i<=50; i++)
    {
        sum=sum+(1/i);
    }
    printf("%f",sum);
}
