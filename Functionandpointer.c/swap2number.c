#include <stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
printf("2nd method to swipe the values\n");
int a;
printf("input the first number : ");
scanf("%d",&a);
int b;
printf("input second number : ");
scanf("%d",b);

swap(a,b);

printf("%d",a);
printf("%d",b);

return 0;
}