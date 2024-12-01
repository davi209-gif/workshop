#include <stdio.h>
#include <stdbool.h>
int main()
{
printf("identify that the givenn element present in array or not\n");
int arr[7]={1,2,3,4,5,6,7};
int x=4;
int index=0;
 bool flag=false;
for(int i=0;i<=6;i++){
    if(arr[i]==4){
    flag=true;
    index=0+i;
    break;
    }
}
if(flag==true){
    printf("yes it is present in array and its index is %d\n",index);
}
if(flag==false){
    printf("no it is not present in array\n");
}







    return 0;
}