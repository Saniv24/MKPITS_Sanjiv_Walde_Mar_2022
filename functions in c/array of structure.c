#include<stdio.h>
struct stud
{
    int ID;
    char name[30];
};
void main()
{
    struct stud S[4]={12345,"Sanjiv"};
    
    int i;
   for( i=0;i<4; i++)
   {
    printf("Enter student ID:\n");
    scanf("%d",&S[i].ID);
    printf("Enter student name:\n");
    scanf("%s",S[i].name);
   }
   for( i=0;i<4; i++)
   {
    printf("student ID=%d\n",S[i].ID);
    printf("student name=%s",S[i].name);
   }
}
    
