#include <stdio.h>
#include <conio.h>
void main(){

int num, n1, n2, n3, n4, n5, sum, er, or;
printf("Enter any 5 digit:");
scanf("%d",&num);

n1=num%10;
num=num/10;

n2=num%10;
num=num/10;

n3=num%10;
num=num/10;

n4=num%10;
num=num/10;

n5=num%10;
 if(n1%2==0)
 {
 	er=er+n1;
 }
 else{
 	or=er+n1;
 }
 if(n2%2==0){
 	er=er+n2;
 }
 else
 {
  or=er+n2;	
 }
 if(n3%2==0){
 	er=er+n3;
 }
 else {
 	or=er+n3;
 }
 if(n4%2==0){
  er=er+n4;	
 }
 else
 {
 	or=er+n4;
 }
 if(n5%2==0){
 	er=er+n5;
 }
 else
 {
 	or=er+n5;
 }
 printf("sum of even no.is %d and sum of odd no.is %d",er,or);
}
 
 
 
 
 
 
 
 
 
 
 
