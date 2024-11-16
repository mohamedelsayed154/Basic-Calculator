#include <stdio.h>

int main (void){
 float num1 , num2;
 char opp;

 printf("Entre first number ");
 scanf(" %f" , &num1);
 printf("Entre opperation ");
 scanf(" %c" , &opp);
 printf("Entre second number ");
 scanf(" %f" , &num2);

 switch (opp){
 case '+' :
     printf ("result : %.2f\n" , num1 + num2);
     break;
 case '-' :
    printf("result : %.2f\n" , num1 - num2);
    break;
 case '*' :
    printf("result : %.2f \n" , num1 * num2);
    break;
 case '/' :
    printf("result : %.2f \n" , num1 / num2);
    break;
 }



}
