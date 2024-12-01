#include <stdio.h>
int main()
{
printf("Print the table of n.Here n is the integer user will input\n");

int n;
printf("Input any integer :  ");
scanf("%d",&n);

for(int i=n;i<=1000;i=i+n){
    printf("\n%d",i);
}
    return 0;
}

#include <stdio.h>
int main()
{
printf("Display this AP -1,3,5,7,9 upto n terms");

int n;

printf("Input any integer: ");
scanf("%d",&n);
for(int i=1 ; i<=n; i=i+n){
    printf("%d",i);
}
    return 0;
}
#include <stdio.h>
int main()
{
printf("Display the GP upto nth terms\n");
int n;
printf("INPUT ANY INTEGER: ");
scanf("%d",&n);
int a=1;

for(int i =1; i<=n,i=i+1){
    printf("%d",a); 
    a = a*2;
}
    return 0;
}
#include <stdio.h>
int main()
{
printf("Write the reverse AP-100,97,98...upto positive term");
int a =100;
for(int i =1;a>0;i=i+1){
    printf("%d",a);
    a=a-3;
}











    return 0;
}