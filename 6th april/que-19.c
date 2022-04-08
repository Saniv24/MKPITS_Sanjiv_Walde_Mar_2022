#include <stdio.h>
#include <conio.h>
int main() 
{
    int p, q, r, s;
    printf("Enter the values:");
    scanf("%d %d %d %d",&p, &q, &r, &s);
    
    if(q>r)
    {
    printf("Correct values");
    }
    else
    if(s>p)
    {
        printf("Correct values\n");
    }
    else
    if((r+s)>(p+q))
    {
        printf("Corect values\n");
    }
    else
    {
        printf("wrong values");
    }
}
