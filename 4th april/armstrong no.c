#include <stdio.h>
#include <conio.h>
void main() {
    int num,a, n1,n2,n3, arm ;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    n1=num%10;
    a=num/10;
    n2=a%10;
    a=a/10;
    n3=a%10;
    arm=n1*n1*n1+n2*n2*n2+n3*n3*n3;
    if (arm == num)
    {
        printf("%d is an Armstrong number.", num);
    }
    else{
        printf("%d is not an Armstrong number.", num);
        }
  }
