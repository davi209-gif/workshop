#include <stdio.h>
int main()
{
    int s1 = 80; // physics marks
    int s2 = 90; // maths marks
    int s3 = 55; // chemistry marks
    int s4 = 80; // english marks
    int s5 = 75; // physical education marks
    int p = (s1 + s2 + s3 + s4 + s5) / 5;
    printf("Percentage of class12 is : %d", p);
    printf("\n");

    float m1 = 80; // physics marks
    float m2 = 90; // maths marks
    float m3 = 55; // chemistry marks
    float m4 = 80; // english marks
    float m5 = 75; // physical education marks
    float mm = (s1 + s2 + s3 + s4 + s5) / 5;
    printf("Percentage of class12 is : %f", mm);

    return 0;
}