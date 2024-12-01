#include <stdio.h>
int main()
{
printf("We are making a programme to calculate Simple Interest");

float principal,rate,time,si;

printf("\nInput Principal : ");
scanf("%f",&principal);

printf("\nInput Rate : ");
scanf("%f",&rate);

printf("\n Input Time : ");
scanf("%f",&time);

si = (principal*rate*time)/100;

printf("The Simple Interest is : %f", si);


    return 0;
}