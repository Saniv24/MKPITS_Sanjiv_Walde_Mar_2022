#include<stdio.h>
int main()
{
/*	 1
   3 3
  5 5 5
 7 7 7 7*/
    int i, j, k, add=1;
    for(i=1;i<=4;i++)
    {
        for(k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j-- )
        {
            printf("%d ",add);
        }
        add=add+2; 
        printf(" \n");
    }
}
