#include <stdio.h>
int main()
{
printf("write a program to print the row number having the maximum sum in give matrix\n");
int arr[3][4]={{1,2,3,1},{0,5,0,9},{1,0,0,3}};
int max=0;
int sum=0;
int rowno;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        sum=sum+arr[i][j];
    }
    if(max<sum){
        max=sum;
        sum=0;
        rowno=i+1;
        
    }
}
printf("%d",rowno);




    return 0;
}