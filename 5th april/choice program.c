
#include <stdio.h>
#include <conio.h>
int main()
{
    int choice, n1, n2, result;
    printf("press 1 for addition:\n");
    printf("press 2 for substraction:\n");
    printf("press 3 for multiplication:\n");
    printf("press 4 for division:\n");
    scanf("%d", &choice);
    
    if(choice==1)
    {
        printf("Addition");
    }
    else if (choice==2)
    {
        printf("Substraction");
    }
    else if(choice==3)
    {
        printf("Multiplication");
    }
    else if(choice==4)
    {
        printf("Division");
    }
    else{
        printf("invalid input");
    }
}
