#include <stdio.h>
#include <conio.h>
int main() {
    int days, year, month;
    printf("Enter total days here:");
    scanf("%d",&days);
    
    year=days/365;
    month=(days%365)/30;
    days=days-((year*365)+(month*30));
    
    printf("Total year is: %d\n",year);
    printf("Total month is: %d\n",month);
    printf("Total days is: %d",days);
}
