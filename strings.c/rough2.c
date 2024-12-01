/*#include <stdio.h>
int main()
{
    int x=5;
    int *ptr=&x;
    printf("%d",*ptr);

    return 0;
}*/
#include <stdio.h>
int main()
{
printf("i am code to watch address of string is nothing but address of string first element\n");
char str[]="college wallah";
char *ptr=str;
printf("%c\n",*ptr);
printf("%d\n",*ptr);
printf("%p\n",ptr);
printf("%p\n",str[0]);
printf("%d\n",ptr);

    return 0;
}