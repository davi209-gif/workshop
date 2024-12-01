#include <stdio.h>
int main()
{
printf("Take positive integer input and tell if it is even or odd");

int x ;
printf("\nInput positive integer :  ");
scanf("%d",&x);

if(x%2==0){
    printf("Even Number");
}

else{

    printf("Odd Number");
}



/*if(x%2!=0)
{
    printf("Odd Number");
}*/



    return 0;
}