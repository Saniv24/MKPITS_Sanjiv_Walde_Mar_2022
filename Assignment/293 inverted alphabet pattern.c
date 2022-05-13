#include<stdio.h>
int main()
{
    int r, c;
    for(r=65;r<=69;r++)
    {
        
        for(c=69;c>=r;c--)
        {
            printf("%c",r);
            
        }
        printf("\n");
    }
}

