#include<stdio.h>
int main()
{
    int a[7];
    int i, x;
    printf("Enter no.:");
    scanf("%d",&x);
    for(i=0; i<=6; i++)
    {
        a[i]=x;
		x=3*x;
    }
    
   for(i=0; i<=6; i++)
   {
       printf("a[%d]=%d\n",i, a[i]);
   }
}

