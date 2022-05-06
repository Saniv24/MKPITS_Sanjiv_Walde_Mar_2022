
 #include<stdio.h>
void fun(int x, int y)
{
    x=6;
    y=3;
}
void main()
{
    int a=8, b=5;
    printf(" a=%d b=%d",a,b);
    fun(a,b);
    printf(" a=%d b=%d",a,b);
}


 
