#include <stdio.h>
#include <conio.h>
int main() 
   {
	double w1, p1, w2, p2, result;
    printf("Weight - Item1: ");
	scanf("%lf", &w1);
	printf("No. of item1: ");
	scanf("%lf", &p1);
	printf("Weight - Item2: ");
	scanf("%lf", &w2);
	printf("No. of item2: ");
	scanf("%lf", &p2);
	result = ((w1 * p1) + (w2 * p2)) / (p1 + p2);
	printf("Average Value = %f\n", result);
	return 0;
}

