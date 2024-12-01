#include <stdio.h>
int main()
{
printf("given a matrix having 0 and 1 only,find the row having maximum no. of 1s\n");
int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}};
int max=0;
int sum=0;
int rowno;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        if(arr[i][j]==1){
            sum=sum+arr[i][j];
        }
    }
    if(max<sum) {
    max=sum;
    rowno=i+1;}
    sum=0;
}
printf("%d",rowno);



    return 0;
}