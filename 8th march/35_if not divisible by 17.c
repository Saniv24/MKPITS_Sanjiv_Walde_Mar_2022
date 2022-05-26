#include<stdio.h>
#include<conio.h>
void main()
{
    int x, y, sum=0, i;
    printf("Enter value of x & y :");
    scanf("%d%d",&x,&y);
    i=x;
    while(y>=i)
    {
        if(i%17!=0)
        {
            sum=sum+i;
        }
        i++;
    }
    printf("Sum of all the integers between,if not divisible by 17 is %d & %d=%d",x,y,sum);
}   
   
