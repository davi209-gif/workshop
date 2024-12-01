#include <stdio.h>
int main()
{
printf("take Integer input and print the absolute value of that integer");

int x , y ;
printf("\nEnter the integer : ");
scanf("%d",&x);

y = -(x);

if(x<0){
    printf(" The absolute value is %d",y);
}
if(x>0){

    printf(" The absolute value is ṇ%d",x);
}


    return 0;
}