#include <stdio.h>
int main()
{
    printf(" Take positive integer input and tell if it is a three digit number or not ");
int n;
printf("\nInput any Integer :  ");
scanf("%d",&n);

if(n>99 && n<1000)
{
    printf("It is a three digit number");

}
else{

    printf("It is a not three digit number");
}











    return 0;
}