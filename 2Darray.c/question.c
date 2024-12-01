#include <stdio.h>
int main()
{
printf("write a program to store roll no and marks obtaines side by side in matrix\n");
int arr[4][2];
for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}






    return 0;
}