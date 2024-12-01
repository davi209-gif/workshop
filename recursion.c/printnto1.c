
#include <stdio.h>
void number(int n){
    if(n==0) return;
    printf("%d\n",n);
    number(n-1);
    return;
}
int main()
{
printf("print the number from n to 1 using recursion\n");
int n;
printf("Input any number");
scanf("%d",&n);

 number (n);

return 0;
}