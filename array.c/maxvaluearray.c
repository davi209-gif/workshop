/*#include <stdio.h>
int main()
{
printf("find the maximum value element of the array\n");
int arr[8]={9,2,11,13,3,4,8,7};
int max=-1;
for(int i=0;i<=7;i++){
    if(max<arr[i]){ max=arr[i];}
    
}
printf("%d",max);

return 0;
}*/
/*#include <stdio.h>
int main()
{
printf("2nd method to find max value element of the array\n");
int arr[8]={9,2,11,13,3,4,8,7};
int max=arr[0];
for(int i=0;i<=7;i++){
    if(max<arr[i]){max=arr[i];}
}
printf("%d",max);

    return 0;
}*/
/*#include <stdio.h>
#include <limits.h>
int main()
{
int arr[5]={-20,-342,-63,-57,-884};
int max=INT_MIN;//sabse chotta number
for(int i=0;i<=4;i++){
    if(max<arr[i]){max=arr[i];}

}
printf("the max value is %d",max);

    return 0;
}*/
#include <stdio.h>
#include <limits.h>
int main()
{
printf("find the min value of the elements in the array");
int arr[5]={2,5,53,80};
int max=INT_MAX;
for(int i=0;i<=4;i++){
    if(max>arr[i]){max=arr[i];}
}

printf("the min value is %d",max);

    return 0;
}
