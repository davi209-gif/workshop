/*#include <stdio.h>
int main()
{
printf("print the ascii value by using string\n");
char str[20]="abcdef";
int i=0;
while(str[i]!='\0'){
    printf("%d\n",str[i]);
    i++;
}


    return 0;
}*/
/*#include <stdio.h>
int main()
{
    printf("print the ascii value of element of string\n");
    char str[]="abcdef";
    printf("%c\n",0[str]);
    printf("%d",0[str]);

    return 0;
}*/
#include <stdio.h>
int main()
{
printf("code to print the address of string\n");
char str[]="collegewallah";
char *ptr=&str[0];
printf("%p\n",&str[0]);
printf("%p\n",str);
printf("%p",ptr);


    return 0;
}