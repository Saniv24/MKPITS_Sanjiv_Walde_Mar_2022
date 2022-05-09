#include<stdio.h>// argument with no return
void oddsum(int , int,int , int , int  );
void oddsum(int n,int n1,int n2,int n3,int n4)
{
    int oddr=0;
    
    if(n%2!=0)
    {
        oddr=oddr+n;
    }
    if(n1%2!=0){
        oddr=oddr+n1;
    }
    if(n2%2!=0){
        oddr=oddr+n2;
    }
    if(n3%2!=0){
        oddr=oddr+n3;
    }
    if(n4%2!=0){
        oddr=oddr+n4;
    }
      printf("sum of odd vlues:%d",oddr);
    }

void main()
{
	int a, b, c, d, e;
    printf("Enter 5 numbers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    oddsum(a,b,c,d,e);
}
