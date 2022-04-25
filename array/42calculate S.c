#include<stdio.h>
int main()
{
    float i,j=1, n, sum=0;
    
    printf("Result of length is:");
   
    for(i=1; i<=7; i=i+2)
    {
        
        n=i/j;
        sum=sum+n;
        j=j*2;
    }
    printf("%f",sum);
}

