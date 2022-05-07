#include<stdio.h>//with argu no return
int sum();

int sum()
{
   int a, b, c=0;
   printf("Enter x & y:");
    scanf("%d%d",&a,&b);
    c=a+b;
    return(c);
}
int main()
{
     int s;
    
  s=sum(); 
  
  printf("sum is :%d",s);
}
