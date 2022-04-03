#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,sw;
	printf("Enter any two number ");
	scanf("%d %d",&num1,&num2);
     sw=num2;
     num2=num1;
     num1=sw;
	printf("After swapping \n");
	printf("num1=%d num2=%d",num1,num2);
	
}
