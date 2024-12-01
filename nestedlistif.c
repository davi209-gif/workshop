#include <stdio.h>
int main ()
{
printf("Making the nested list of if\n");

int x;
printf("Input the number:  ");

scanf("%d",&x);

if (x>=0)
{
printf("Posititve number\n");
if (x%2==0)
{
printf("Even number");

}

}
else
{
    printf("odd number");
}

return 0;

}