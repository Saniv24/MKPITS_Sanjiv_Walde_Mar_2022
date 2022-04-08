#include <stdio.h>
#include <conio.h>
int main() 
{
	int X, Y, Z;
	printf(" Enter the number X, Y and Z:\n");
	scanf("  %d %d %d",&X, &Y, &Z);
	
	if(X >=Y && X >=Z)
	printf(" %d is the largest number:\n",X);
	
	if(Y >=X && Y >=Z)
	printf(" %d is the largest number:\n",Y);
	if(Z >=X && Z >=Y)
	printf(" %d is the largest number:\n",Z);
}
