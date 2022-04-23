#include<stdio.h>
int main()
{
    int a[5], i,search, f=0;
    
    for(i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number that wants to search:");
    scanf("%d",&search);
    for(i=1; i<=4;i++)
    {
       if(a[i]==search)
       {
          f=1;
       }
    }
    if(f==1)
    printf("present");
    else
    printf("not present");
}
