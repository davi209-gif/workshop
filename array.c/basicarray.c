#include <stdio.h>
int main()
{
printf("Write a program to enter price of 3items and print their final cost with gst\n");
float prices[2];
printf("cost of 1 item : ");
scanf("%f",&prices[0]);
printf("cost of 2 item: ");
scanf("%f",&prices[1]);
printf("cost of 3 item : ");
scanf("%f",&prices[2]);

printf("total price 1 is %f",prices[0]+(0.18*prices[0]));
printf("total price 2 is %f",prices[1]+(0.18*prices[1]));
printf("total price 3 is %f",prices[2]+(0.18+prices[2]));









return 0;
}