#include <stdio.h>
int main()
{
printf("Example3:Take a Float input and print the fractional part of the real number");

float realnumber,fp;

printf("\nInput any positive real number :  ");
scanf("%f",&realnumber);

int x;
printf( "\nAgain put your real number :  ");
 scanf("%d",&x);


fp = realnumber - x;


printf("The fractional part of your input is : %f",fp);












    return 0;
}