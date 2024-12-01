#include <stdio.h>
int main()
{
printf("If cost price and selling price is input through keyboard. write a program to determine whether the seller has made profit or incured loss.Also determine how much profit or loss he incurred");

int cp , sp ;

printf("\n\nInput Cost price : ");
scanf("%d",&cp);

printf("\nInput Selling price : ");
scanf("%d",&sp);

int loss;
if(cp>sp)
{
    loss = sp - cp;
printf("You are in loss by %d",loss);
}
 int profit;

 if(sp>cp)
 {
    profit = sp - cp;
    printf("You are in Profit by %d",profit); 
 }

if(cp==sp)
{
printf("\nYou are neither in loss nor in profit.");
}


    return 0;
}