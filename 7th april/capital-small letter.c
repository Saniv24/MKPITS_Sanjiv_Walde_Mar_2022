
#include <stdio.h>
#include <conio.h>
int main() 
{
  char ch;
  
  printf("Enter any charecter:");
  scanf("%c",&ch);
  
  if(ch>=65 && ch<=90)
  {
   printf("Given input is capital letter");
  }
  else
  if(ch>=97 && ch<=122)
  {
      printf("Given input is small letter");
  }
  else
  if(ch>=47 && ch<=57)
  {
      printf("Given input is number");
  }
  else
  {
      printf("Given input is special symbol");
  }
}
