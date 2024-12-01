#include <stdio.h>
int main()
{
printf("transpose the given matrix\n");
int arr[3][3]={{1,2,3},{4,5,6}};
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",arr[j][i]);
    }
    printf("\n");
}







    return 0;
}