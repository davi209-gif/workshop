#include <stdio.h>
int main()
{
printf("transpose the matrix and store it as a new matrix\n");
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int arr2[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        arr2[i][j]=arr[j][i];
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",arr[j][i]);
    }
    printf("\n");

}






    return 0;
}