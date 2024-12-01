#include <stdio.h>
int main()
{
printf("Example:Take two integers input, a and b:a>b,and find the remainder when a is divided b ");

int a,b;
printf("\n Enter the Dividend : ");
scanf("%d",&a);

printf("Enter the Divisor : ");
scanf("%d",&b);

int q = a/b;
int r = a-(b*q);

printf("The Remainder when %d is divided by %d : %d",a,b,r);



    return 0;
}