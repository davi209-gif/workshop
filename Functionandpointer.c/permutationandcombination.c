#include <stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        int fact=fact*i;
    }
    return fact;}


int main()
{
printf("We are making the function to calculate ncr\n");
int n,r;
printf("Enter the value of n: ");
scanf("%d",&n);
printf("\nEnter the value of r:  ");
scanf("%d",&r);
int nfact=factorial(n);
int rfact=factorial(n);
int nrfact=factorial(n-r);
int ncr= nfact/(rfact*nrfact);

printf("The value of ncr is%d",ncr);



    return 0;
}
