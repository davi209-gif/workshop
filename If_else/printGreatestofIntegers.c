#include <stdio.h>
int main()
{
    printf("Take 3 positive integers and find greatest of them");

    int n1, n2, n3;
    printf("\nInput first positive integer : ");
    scanf("%d", &n1);

    printf("\nInput second positive integer : ");
    scanf("%d", &n2);

    printf("\nInput third positive integer : ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("\n%d is Greatest", n1);
    }

    if (n2 > n1 && n2 > n3)
    {
        printf("\n%d is Greatest", n2);
    }
    if (n3 > n1 && n3 > n2)
    {
        printf("\n%d is Greatest", n3);
    }

    return 0;
}