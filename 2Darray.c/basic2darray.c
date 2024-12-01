#include <stdio.h>
int main()
{
printf("print the 2d array\n");
int arr[2][2]={{1,2},{3,4}};
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
printf("print another array\n");
int arr[3][2]={{1,2},{3,4},{5,6}};
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}




    return 0;
}*/