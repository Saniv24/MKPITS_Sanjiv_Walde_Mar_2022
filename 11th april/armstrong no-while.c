#include <stdio.h>
#include <conio.h>
void main() {
    int num=1;
    int a, n1,n2,n3, arm ;
    printf("All armstrong no. bet 1 to 1000:\n ");
    
    while(num<=1000){
    n1=num%10;
    a=num/10;
    n2=a%10;
    a=a/10;
    n3=a%10;
    arm=n1*n1*n1+n2*n2*n2+n3*n3*n3;
    if (num == arm)
    {
        printf("%d\n",arm);
    }
    num++;
  }
}
