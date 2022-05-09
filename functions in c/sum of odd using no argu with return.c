#include<stdio.h>
int oddsum();

int oddsum()
{
    int n, n1, n2, n3, n4, oddr=0;
    printf("Enter 5 numbers:");
    scanf("%d%d%d%d%d",&n,&n1,&n2,&n3,&n4);
    
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
    return(oddr);
}
int main()
{
	int s;
    s=oddsum();
    
      printf("sum of odd vlues:%d",s);
    
}
