/*#include <stdio.h>
#include <string.h>
int main()
{
printf("size of string and reverse the string");
char str[40];
gets(str);
int i=0;
int size=0;
while(str[i]!='\0'){
size++;
i++;
}
printf("%d",size);
for(int i=0,j=size-1;i<=j;i++,j--){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
puts(str);

    return 0;
}*/
#include <stdio.h>
int main()
{
printf("we can use  char pointer to store the whole string or we say address of every character\n");
char *ptr="college wallah";
printf("%c",*ptr);




    return 0;
}