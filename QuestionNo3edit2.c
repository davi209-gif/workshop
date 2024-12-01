#include <stdio.h>
int main()
{
printf("Example3:Take a Float input and print the fractional part of the real number");

float x;
printf("\nInput any Real number :  ");
scanf("%f",&x);

int y;
y = x;

float fp = x-y;

printf("The fraction part of your Input is : %f",fp);









    return 0;
}