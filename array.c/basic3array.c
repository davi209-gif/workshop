#include <stdio.h>
int main()
{
printf("We will print\n");
int age =100;
int *ptr =&age;
printf("%u\n",ptr);
ptr++;
printf("%u\n",ptr);
ptr--;
printf("%u\n",ptr);

printf("%u",&ptr);







    return 0;
}