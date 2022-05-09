#include<stdio.h>  
int main()   
{   
  int A, B;  
  printf("Enter the value of A and B:");  
  scanf("%d %d",&A,&B);  
  printf("before swapping numbers: %d   %d\n",A,B);  
  

  A = A + B;   
  B = A - B;    
  A = A - B;  
  printf("After swapping: %d    %d",A,B);   
  return 0;   
}  
