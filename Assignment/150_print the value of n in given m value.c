/*write a c program to read the value of integer m & display the value of n
is 1 when m is larger than 0, 0 when m is 0 & -1 when m less than 0*/
#include<stdio.h>
#include<conio.h>
int main()
{
   int m, n;
   printf("Enter m value :");
   scanf("%d",&m);
   
   if(m>0)
   n=1;
   else if(m==0)
   n=0;
   else
   n=-1;
   printf("The value of n=%d\n",n);
}
