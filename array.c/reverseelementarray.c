#include <stdio.h>
void reverse(int arr[],int si,int fi)
{
    for(int i=si,j=fi;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }


return;
    

}
int main()
{
printf("reverse the element of array by using function\n");
int arr[7]={1,2,3,4,5,6,7};
reverse(arr,0,6);
for(int i=0;i<=6;i++){
    printf("%d",arr[i]);
}





    return 0;
}