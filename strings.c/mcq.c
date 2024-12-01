/*#include<stdio.h>
#include<string.h>
int main()
{
 char str1[20] = "Hello", str2[20] = " World";
 printf("%s\n", strcat(str2,strcpy(str1, str2)));
 return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[25] = "The cocaine man";
    int i=0;
    char ch;
    ch = s[++i];
    printf("%c", ch);
    ch = s[i++];
    printf("%c", ch);
    ch = i++[s];
    printf("%c", ch);
    ch = ++i[s];
    printf("%c\n", ch);
    printf("%c",ch);
    return 0;
}



