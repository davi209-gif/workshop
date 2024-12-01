#include <stdio.h>
#include <limits.h>
int main()
{
printf("second largest element of array\n");
int max=INT_MIN;
int smax=INT_MIN;
int arr[8]={1,2,3,4,5,6,7,8,};
for(int i=0;i<=7;i++){
    if(max<arr[i]) max=arr[i];

}
for(int i=0;i<=7;i++){
    if(smax<arr[i] && max!=arr[i]) {smax=arr[i];
}
}
printf("%d",smax);







    return 0;
}