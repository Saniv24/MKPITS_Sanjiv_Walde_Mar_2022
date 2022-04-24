#include<stdio.h>
int main()
{
    int r, c, n;
    printf("Enter n number:");
    scanf("%d",&n);
    for(r=n; r>=1;r--)
    {
       for(c=n; c>r;c--)
       printf(" %d",c);
       for(c=1; c<=2*r-1; c++)
       printf(" %d",r);
       
       for(c=r+1; c<=n; c++)
       printf(" %d",c);
       printf("\n");
    }
    
    for(r=1; r<n; r++)
    {
        for(c=n; c>r; c--)
        printf(" %d",c);
        for(c=1; c<=2*r-1;c++)
        printf(" %d",r+1);
        for(c=1+r; c<=n; c++)
        printf(" %d",c);
        printf("\n");
    }
   
}
