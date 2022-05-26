#include<stdio.h>
#include<conio.h>
void main()
{
    int x, y, i;
    printf("Enter values of x & y :");
    scanf("%d%d",&x,&y);
    printf("number which gives remainder when divided by 7 is\n");
    i=x;
    while(y>=i)
    {
        if(i%7==2 || i%7==3)
        {
            printf("%d\n",i);
        }
        i++;
    }
    
}   
   
