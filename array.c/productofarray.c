#include <stdio.h>
int main()
{
printf("product of array\n");
int arr[3]={2,5,3};
int product=1;
for(int i =0;i<=2;i++){
product=product*arr[i];
}
printf("the product is %d",product);







    return 0;
}