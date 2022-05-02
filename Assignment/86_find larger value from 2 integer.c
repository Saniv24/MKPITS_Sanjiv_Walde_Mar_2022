#include<stdio.h>
int main()
{
    int A, B;
    
    printf("Enter two integer values:");
    scanf("%d%d",&A, &B);
    
    if(A>=20 && A<=30 || B>=20 && B<=30)
    {
        printf("not in range\n\n");
        if(A>B)
        {
            printf("A is grater");
        }
        else
        {
            printf("B is greater");
        }
    }
    else
    {
       printf("\n%d\n",0); 
    }
}
