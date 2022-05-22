#include<stdio.h>
int main()
{
	/* 1
   2 2
  3 3 3
 4 4 4 4*/
    int i, j, k;
    for(i=1;i<=4;i++)
    {
        for(k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j-- )
        {
            printf("%d ",i);
        }
        printf(" \n");
    }
}
