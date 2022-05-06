#include<stdio.h>
struct stud
{
    int ID;
    char name[30];
};
void main()
{
   struct stud S1={12345,"sanjiv"};
   
   
    
    printf("student ID=%d\n",S1.ID);
    printf("student name=%s\n",S1.name);
    
}
    
