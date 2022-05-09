#include<stdio.h>
int main()
{
    char i;
    printf(" \ncapital alphabets with decimals:\n");
    for(i=65; i<=90;i++)
    {
        printf(" %c=%d,",i,i);
    }
    printf("\n\nsmall alphabets with decimal:\n\n");
    
    for(i=97; i<=122;i++)
    {
        printf(" %c=%d,",i,i);
    }
}
