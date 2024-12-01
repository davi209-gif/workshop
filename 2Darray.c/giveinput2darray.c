#include <stdio.h>
int main()
{
printf("take the input from user and print the array");
int arr[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
    return 0;
}
/*#include <stdio.h>
int main()
{
int row;
int coloumn;
printf("enter the row %d and enter the coloumn %d",&row,&coloumn);
int arr[row][coloumn];
for(int i=0;i<row;i++){
    for(int j=0;j<coloumn;j++){
        scanf("%d",&arr[i][j]);
    }
for(int i=0;i<coloumn;i++){
    for(int j=0;j<coloumn;j++){
        printf("%d",arr[i][j]);
    }
}
printf("\n");
}



    return 0;
}*/