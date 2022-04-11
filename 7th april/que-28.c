#include<stdio.h>
#include<conio.h>
main()
{
  float a, b, c, d, e, pos=0 ,neg=0, total, avg;
  printf("input 1st no");
  scanf("%f", &a);
  printf("input 2nd no");
  scanf("%f", &b);
  printf("input 3rd no");
  scanf("%f", &c);
  printf("input 4th no");
  scanf("%f", &d);
  printf("input 5th no");
  scanf("%f", &e);	
		
	if(a>0)
	{
		pos=pos+1;
		total+=a;
	}
	else
	{
		neg=neg+1;
	}
	if(b>0)
	{
		pos=pos+1;
		total+=b;
	}
	else
	{
		neg=neg+1;
	}
	if(c>0)
	{
		pos=pos+1;
		total+=c;
	}
	else
	{
		neg=neg+1;
	}
	if(d>0)
	{
		pos=pos+1;
		total+=d;
	}
	else
	{
		neg=neg+1;
	}
	if(e>0)
	{
		pos=pos+1;
		total+=e;
	}
	else
	{
		neg=neg+1;
	}
		
	avg=total/pos;
	
    printf(" positive no are %f\n",pos);
    printf(" average of positive no are %f",avg);
	
}
