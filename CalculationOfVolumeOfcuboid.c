#include <stdio.h>
int main()
{
printf("We are calculating the Volume of Cuboid");

float length,width,height,volume;

printf("\nInput length (cm) : ");
scanf("%f",&length);

printf("\nInput width (cm) :  ");
scanf("%f",&width);

printf("\nInput height (cm) : ");
scanf("%f",&height);

volume = (length*width*height);

printf("\nVolume of Cuboid (cm) : %f", volume);

    return 0;
}