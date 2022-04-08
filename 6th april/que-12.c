#include <stdio.h>
#include <conio.h>
void main()
{
    int id,hour;
    float salary, value;
    printf("Enter employee id:");
    scanf("%d",&id);
    printf("Enter working hour:");
    scanf("%d",&hour);
    printf("Enter value per hour:");
    scanf("%f",&value);
    
    salary=value*hour;
    
    printf("employee id is:%d\n",id);
    printf("salary or the month:%f",salary);
}
