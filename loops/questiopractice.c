
#include <stdio.h>
int main()
{
printf("Sum of odd digits of the input given by user\n");
int n;
printf("Input any number : ");
scanf("%d",n);
int sum = 0;
 while(n!=0){
    int d = n%10;
    if(d%2!=0)
    sum = sum + d;
    n =n/10;
 }
 if(n==0)
 printf("the sum of odd digit of given input is %d",sum);

  return 0;
}
#