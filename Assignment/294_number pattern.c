#include<stdio.h>
int main()
{
    int r, c;
    for(r=5;r>0;r--)
    {
        for(c=0;c<r;c++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
}
