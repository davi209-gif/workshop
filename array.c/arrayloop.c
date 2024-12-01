#include <stdio.h>
int main()
{
printf("making array by using loop\n");
int arr[5];
for(int i=0;i<=4;i++){
    printf("enter the element number %d",i+1);
    scanf(" %d",&arr[i]);

}
for(int i =0;i<=4;i++){
    printf("%d",arr[i]);
}








    return 0;
}