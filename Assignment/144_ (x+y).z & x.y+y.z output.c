#include<stdio.h>
int main()
{
   int x, y, z;
   printf("Enter value of x, y, z :\n");
   scanf("%d%d%d",&x, &y, &z);
   int res1, res2;
   
   res1=(x+y)*z;
   printf("Output of (x+y).z is :%d\n\n",res1);
   
   res2=x*y+y*z;
   printf("Output of x.y+y.z is :%d",res2);
}
