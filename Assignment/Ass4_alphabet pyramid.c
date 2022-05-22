#include<stdio.h>
int main()
{
   /* A              
     C C
    E E E
   G G G G*/
    int i, j, k, add=65 ;
    for(i=65;i<=68;i++)
    {
        for(k=68;k>=i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=65;j-- )
        {
            printf("%c ",add);
        }
         add=add+2;
        printf(" \n");
    }
}
           
          
