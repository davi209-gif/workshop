#include <stdio.h>
int main()
{
printf("Program to find out the given number is prime or not\n");
int n;

printf("Input any number: ");
scanf("%d",&n);
int a =0;
for(int i=2;i<=n-1;i=i+1){
if(n%i==0){
    a = 1;
    break;
}
}
if(a==0){
    printf("Given number is prime");}
else
 printf("given number is composite");

return 0;
}