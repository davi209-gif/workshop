#include <stdio.h>
int main()
{
printf("Finding that whether year is leap year or not");

int year;
printf("\nInput any Year : ");
scanf("%d",&year);

if(year%4==0)
{
    printf("Year is Leap year");

}
if(year%4!=0){

    printf("Year is not leap year"); 
    }








    return 0;
}