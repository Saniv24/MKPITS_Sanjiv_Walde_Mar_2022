#include<stdio.h>
#include<conio.h>
void main()
{
    int num, a, b, c, d, e, sum, oddr;
    printf("Enter 5 number:");
    scanf("%d",&num);
    
    a=num%10;
    num=num/10;
    
    b=num%10;
    num=num/10;
    
    c=num%10;
    num=num/10;
    
    d=num%10;
    num=num/10;
    
    e=num%10;
    
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
