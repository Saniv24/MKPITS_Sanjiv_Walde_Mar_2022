#include<stdio.h>  
int main()  
{  
    int a[10], i, even = 0, odd = 0;  
  
    printf("Enter 10 integer numbers:\n");  
    for(i = 0; i < 10; i++)  
        scanf("%d", &a[i]);  
  
    printf("\nEven numbers in the array are:\n");  
    for(i = 0; i < 10; i++)  
    {  
        if(a[i] % 2 == 0)  
        {  
            printf("%d\n", a[i]);  
            even++;  
        }  
    }  
  
    printf("\nOdd numbers in the array are:\n");  
    for(i = 0; i < 10; i++)  
    {  
        if(a[i] % 2 != 0)  
        {  
            printf("%d\n", a[i]);  
            odd++;  
        }  
    }  
    printf("\n\nTotal Even numbers: %d", even);  
    printf("\nTotal Odd numbers: %d\n", odd);  
  
    printf("\n");  
}  
