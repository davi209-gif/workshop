/*#include<stdio.h>
int main(){
  float arr[5];
  arr[0] = 5;
  arr[2] = -10;
  arr[3/2] = 2;
  arr[3] = arr[0];
  printf("%f %f %f %f", arr[0], arr[1], arr[2], arr[3]);
  return 0;
}*/
/*#include<stdio.h>
int main(){
  int arr[5];
  arr[0] = 5;
  arr[2] = -10;
  arr[3/2] = 2;
  arr[3] = arr[0];
  printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
  return 0;
}*/
/*#include<stdio.h>
int main(){
int arr[2] = {10, 20};
printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[-1]);
return 0;
}*/
/*#include<stdio.h>
 int main(){
int arr[10] = {1,2,3};
printf("%d %d %d  %d",arr[0],arr[2],arr[4],arr[6]);
return 0;
}*/
/*#include <stdio.h>
int main()
{
    int arr[7]={12,67,45,34,87,90,23};
    for(int i=2;i<=5;i++){
        arr[i]=arr[i+1];
    }
    printf("%d",arr[5]);

    return 0;
}*/
/*#include <stdio.h>
int main(void) {
int i;
int a[5]={1,2,3,4,5};
for(i=5;i>=2;i--)
a[i-1]=a[i-2];
for(i=0;i<5;i++)
printf("%d ",a[i]);
return 0;
}*/
#include <stdio.h>
int main(void) {
int i;
int a[5]={1,2,3,4,5};
for(i=5;i>=2;i--)
a[i+1]=a[i-2];
for(i=0;i<5;i++)
printf("%d ",a[i]);
return 0;}





