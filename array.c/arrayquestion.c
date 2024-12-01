/*#include <stdio.h>
int main()
{
printf("given an array of integers,change the value of all odd indexed element by its 2 multiple and even index element by adding10");
int arr[7]={1,2,3,4,5,6,7};
for(int i=2;i<=7;i=i+2){
    arr[i]=arr[i]*2;
}
for(int i=0;i<=7;i=i+2){
    arr[i]=arr[i]+10;
}
for(int i=0;i<=6;i++){
 printf("%d\n",arr[i]);
}

    return 0;
}*/
/*#include <stdio.h>
int main()
{
printf("count the number of element in given array greater than given number x");
int x=3;
int arr[5]={2,6,8,9,10};
int i=0;
int count =0;
while(i<=4){
    if(arr[i]>3){
        count = count+1;
    }
}
printf("%d",count);
    return 0;
}*/
#include <stdio.h>
int main()
{
printf("find the difference between the sum of element at even indicies to the sum of element at odd indices");
int arr[6]={1,5,5,7,9,11};
int evensum=0;
int oddsum=0;
for(int i=0;i<=5;i=i+2){
    evensum = evensum+arr[i];
}
for(int i=1;i<=5;i=i+2){
    oddsum= oddsum+arr[i];
}
printf("%d",evensum-oddsum);






    return 0;
}