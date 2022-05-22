#include<stdio.h>
int main()
{
    int num, i, mul_table;
    printf("Enter any number here :");
    scanf("%d",&num);
    
    for(i=1;i<=10;i++)
    {
        mul_table=num*i;
        printf("%d\n",mul_table);
    }
}
