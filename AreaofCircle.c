#include <stdio.h>
int main()
{
    printf("Calculation of area of Circle\n");

    float radius = 9;

    float constant = 3.14 * radius * radius;

    printf("Area of circle is : %f", constant); // Here we used float data type

    printf(" cm2");

    int R = 9;
    int C = 3.14 * R * R;
    printf("\nArea of circle is : %d", C); // Here we used integer data type

    printf(" cm2");

     return 0;
}