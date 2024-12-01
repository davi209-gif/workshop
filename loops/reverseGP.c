
#include <stdio.h>
int main()
{
printf("Write the reverse GP-100,50,25\n");
int n;
printf("Input any number: ");
scanf("%d",n);

int a =100;

for(int i =1;i<=n;i=i+1){
    printf("\n%d",a);
    a = a/2;
}
    return 0;
}