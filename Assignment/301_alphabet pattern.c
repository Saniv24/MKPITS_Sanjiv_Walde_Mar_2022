#include <stdio.h>
int main()
{
  int i, j, k;
  for(i= 65; i<=67;i++)
  {
      for(k= 67;k>=i;k--)
      {
          printf("  ");
      }
      for(j= 65;j<=i; j++)
      {
      printf("%c ",i);
      }
      printf("\n");
  }
  
}    
