#include <stdio.h>
void greeting(int n){
if(n==0) return;
printf("Good morning");
greeting(n-1);
return;

}
int main()
{
printf("Print good morning n times through recursion");
int n;
printf("Give the input : ");
scanf("%d",n);

greeting(n);

    return 0;
}