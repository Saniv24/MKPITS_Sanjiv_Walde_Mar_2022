#include<stdio.h>
int main()
{
   /* A
     B B
    C C C
   D D D D*/
    int i, j, k ;
    for(i=65;i<=68;i++)
    {
        for(k=68;k>=i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=65;j-- )
        {
            printf("%c ",i);
        }
         
        printf(" \n");
    }
}
