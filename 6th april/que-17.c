#include <stdio.h>
#include <conio.h>
int main() 
{
	int sec, hours, minuts, seconds;
	printf("Input seconds: ");
	scanf("%d", &sec);
	
	hours = (sec/3600); 
	
	minuts = (sec -(3600*hours))/60;
	
	seconds = (sec -(3600*hours)-(minuts*60));
	
	printf("H:M:S - %d:%d:%d\n",hours,minuts,seconds);
}
