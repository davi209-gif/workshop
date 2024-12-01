#include <stdio.h>
int factorial(int n){
    if(n==1 || n==0)
    return 1;
    int recAns = n*factorial(n-1);
    return recAns;

}
int main()
{
printf("Code to find the factorial by using recursion\n");
int n;
printf("Enter the number : ");
scanf("%d",&n);
int fact =factorial(n);
printf("%d",fact);


    return 0;
}