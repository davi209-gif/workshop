/*#include <stdio.h>
#include <string.h>
int main()
{
printf("concept of gets()\n");

char str[40];
gets(str);
//printf("%s",str);//
puts(str); 
    return 0;
}*/
#include <stdio.h>
int main()
{
printf("print the full string by using percent s\n");
char str[40];
scanf("[^\n]s",str);
puts(str);



    return 0;
}