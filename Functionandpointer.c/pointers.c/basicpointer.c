#include <stdio.h>
int main()
{
printf("using the pointer to save the address of variable\n");
int a =5;
int*x =&a;
printf("%p\n",x);//it is giving the address of variable a which is stored in int x box
printf("%p\n",&x);
printf("%p\n",&a);

    return 0;
}