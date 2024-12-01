#include <stdio.h>
int main()
{
printf("task is find the duplicate element in given array\n");
int arr[7]={1,2,7,4,5,2,7};
for(int i=0;i<=6;i++){
    for(int j=i+1;j<=6;j++){
        if(arr[i]==arr[j]){
            printf("yes the duplicate element is present in array which is %d\n",arr[i]);
        
        }
    }
}






    return 0;
}