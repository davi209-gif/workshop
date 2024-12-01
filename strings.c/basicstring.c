/*#include <stdio.h>
int main ()
{
printf("basic string concept\n");
char arr[3]={'a','b','c'};
printf("%c",arr[1]);



return 0;
}*/

/*#include <stdio.h>
int main()
{
printf("print string by using loop");
char arr[3]={'a','b','c'};
for(int i=0;i<=3;i++){
    printf("%d",arr[i]);
}
    return 0;
}*/

/*#include <stdio.h>
int main()
{
printf("another way to print string\n");
char arr[]="hello";
for(int i=0;i<5;i++){
    printf("%c\n",arr[i]);
}
    return 0;
}*/
#include <stdio.h>
int main()
{
printf("another way to print string by using null character\n");
char arr[]="hello\0";
int i=0;
while(arr[i]!='\0'){
    printf("%c\n",arr[i]);
    i++;
}




    return 0;
}
