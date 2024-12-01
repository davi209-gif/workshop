#include <stdio.h>
int main()
{
printf("Question: Given the length and breadth of rectangle you have to find whether the area will be greater than perimeter or not");

int l , b ;
printf("\nInput Lenght of Rectangle : ");
scanf("%d",&l);

printf("\nInput Width of Rectangle  : ");
scanf("%d",&b);

int area = l*b;
int periemeter = 2*(l+b);

if(area>periemeter)
{
printf("Area is greater than periemeter");

}
else
{
    printf("Periemeter is greater than area");
}

if(area==periemeter)
{
    printf("Area is equal to Periemeter");
}


return 0;
}