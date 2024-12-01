#include <stdio.h>
int main()
{
    printf("rotate the array 2 time\n");
    int arr[4]={1,2,3,4};
for(int i=0;i<=3;i++){
    arr[i]=arr[i+1];
}
for(int i=1;i<=3;i++){
    printf("%d",arr[i]);
}



    return 0;
}