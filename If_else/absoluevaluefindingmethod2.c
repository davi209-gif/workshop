#include <stdio.h>
int main()
{
printf("Method-2 to find the absolute value of input integer");

int n;
printf("\nInput the integer : ");
scanf("%d",&n);



if(n<0)
{
n = -1*(n);
}

    printf("Absolute value of integer is %d",n);








    return 0;
}