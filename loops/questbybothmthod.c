
#include <stdio.h>
int main()
{
printf("Print all the even number between 1 to 100 by continue statement");
for(int i =1; i<=100;i=i+1){
    if(i%2!=0){
        continue;
    }
    printf("\n%d",i);
}


    return 0;
}
