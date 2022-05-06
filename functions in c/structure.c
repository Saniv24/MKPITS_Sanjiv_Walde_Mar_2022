#include<stdio.h>
struct stud
{
    int ID;
    char name[30];
} S1;
void main()
{
   
    printf("Enter student ID:");
    scanf("%d",&S1.ID);
    printf("Enter student name:");
    scanf("%s",S1.name);
    
    printf("student ID=%d\n",S1.ID);
    printf("student name=%s",S1.name);
}
    
