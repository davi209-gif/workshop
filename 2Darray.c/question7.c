#include <stdio.h>
int main()
{
printf("transpose the matrix of n*m\n");
int arr[3][2]={{1,2},{3,4},{5,6}};
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%d",arr[j][i]);
    }
    printf("\n");
}





    return 0;
}