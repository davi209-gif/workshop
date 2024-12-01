#include <stdio.h>
int main()
{
printf("copy the content of one array into other array\n");
int arr[7]={1,2,3,4,5,6,7};
int arrc[7];

for(int i =0;i<=6;i++){
    arrc[i]=arr[i];
}
for(int i=6;i>=0;i--){
    printf("%d",arrc[i]);
}



    return 0;
}