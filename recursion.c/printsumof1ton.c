#include <stdio.h>
void sum(int n, int s){
    if(n==0){
    printf("%d",s);
     return;}
    sum(n-1,s+n);
    return;
}
int main()
{
printf("Print the sum of number from 1to n by using parameterised recursion\n");
int n;
printf("input the number : ");
scanf("%d",&n);

sum(n,0);








    return 0;
}