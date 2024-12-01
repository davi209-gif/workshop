
#include <stdio.h>
void ascending(int n){
    if(n==0) return;
    ascending(n-1);
    printf("%d\n",n);
    
    return;

}
int main()
{
printf("print 1 to n when we do code after recursion call\n");
int n;
printf("input the value of n : ");
scanf("%d",&n);
ascending(n);





    return 0;
}