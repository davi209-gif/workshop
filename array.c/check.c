/*#include <stdio.h>
int main()
{
int age = 23;
int x = 23;
printf("%p\n",age);
printf("%p",x);

return 0;
}*/
#include <stdio.h>
int main()
{
int age[2]={5,6};
printf("%p\n",&age);
printf("%p",&age[0]);

    return 0;
}