#include<stdio.h>
#include<conio.h>
void main()
{
  int a, b, c, d, e, pos=0, neg=0;
  printf("Enter 1st number:\n");
  scanf("%d",&a);
  printf("Enter 2nd number:\n");
  scanf("%d",&b);
  printf("Enter 3rd number:\n");
  scanf("%d",&c);
  printf("Enter 4th number:\n");
  scanf("%d",&d);
  printf("Enter 5th number:\n");
  scanf("%d",&e);
  
  
  if(a>0){
      
      pos=pos+1;
  }
  else{
      neg=neg+1;
  }
  if(b>0)
  {
      pos=pos+1;
  }
  else{
      neg=neg+1;
  }
  if(c>0){
      pos=pos+1;
  }
  else{
      neg=neg+1;
  }
  if(d>0){
      pos=pos+1;
  }
  else{
      neg=neg+1;
  }
  if(e>0){
      pos=pos+1;
  }
  else{
      neg=neg+1;
  }
  printf("positive no.is %d\n",pos);
  printf("negative no.is %d",neg);
  
}
