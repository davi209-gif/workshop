#include <stdio.h>
int main()
{
    printf("Calculation of Simple Interest");

    float p,r,t,si;
    p = 100;
    r = 10;
    t = 2;
    si = (p*r*t)/100;
    printf("%f", si);

    return 0; 

}