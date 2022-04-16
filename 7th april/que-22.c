#include<stdio.h>
#include<conio.h>
void main()
{
    int  a, b, c, d, e, oddr=0;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    printf("Enter d:");
    scanf("%d",&d);
    printf("Enter e:");
    scanf("%d",&e);
    
    if(a%2!=0)
    {
        oddr=oddr+a;
    }
    if(b%2!=0){
        oddr=oddr+b;
    }
    if(c%2!=0){
        oddr=oddr+c;
    }
    if(d%2!=0){
        oddr=oddr+d;
    }
    if(e%2!=0){
        oddr=oddr+e;
    }
    printf("sum of odd number is %d",oddr);
}
