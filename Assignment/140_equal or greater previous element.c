#include<stdio.h>
int main()
{
    int a[10], i;
    printf("Enter value :");
    for(i=0;i<5-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5-1;i++)
    {
      if(a[i+1]>a[i])
      {
          printf("True");
          break;
      }
      else
      {
          printf("False");
          break;
      }
    }
}
