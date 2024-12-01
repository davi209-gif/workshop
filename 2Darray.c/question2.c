#include <stdio.h>
int main()
{
printf("write a program to store 10 at every index of a 2d matrix with 5rows and 5coloumns\n");
int arr[5][5];
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        arr[i][j]=5;
    }
}
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
    printf("%d",arr[i][j]);
    }
    printf("\n");
}




    return 0;
}