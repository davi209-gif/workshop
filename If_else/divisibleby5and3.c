#include <stdio.h>
int main()
{
printf(" Take positive integer input and tell if it is divisible by 3 and 5");

int n;
printf("\nInput any positive integer :  ");
scanf("%d",&n);

if(n%3==0 && n%5==0)
{

printf("Yes,It is divisble by both 3 and 5");
}
else{

printf("No,It is not divisible by both.");

}







    return 0;
}