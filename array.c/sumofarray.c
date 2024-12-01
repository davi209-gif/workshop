#include <stdio.h>
int main()
{
    printf("calculate the sum of all elements present in array\n");
    int arr[5]={1,3,5,7,10};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum = sum+arr[i];
    }
    printf(" the sum is %d",sum);

    
   return 0;
}