/*#include <stdio.h>
int main()
{
printf("sum of two 1d arrays\n");
int arr[]={1,2,3};
int arr2[]={4,5,6};
int sum=0;
for(int i=0;i<3;i++){
sum=sum+arr[i]+arr2[i];
}
printf("the sumof two arrays is %d",sum);

    return 0;
}*/
#include <stdio.h>
int main()
{
printf("Sum of two 2d arrays\n");
int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
int arr2[3][3]={{1,2,3},{1,2,3},{1,2,3}};
 int sum=0;
 int sumt=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        sum=sum+arr[i][j]+arr2[i][j];

    }
}
printf("%d",sum);




    return 0;
}
