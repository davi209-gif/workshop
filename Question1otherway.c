#include <stdio.h>
int main()
{
    printf("2nd method to find the remainder");

int a,b;

printf("\n Enter the Dividend :  ");
scanf("%d",&a);

printf("\n Enter the Divivsor :  ");
scanf("%d",&b);

int r = a % b;

printf("\n The Remainder is : %d",r); 


    return 0;
}