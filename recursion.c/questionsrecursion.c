#include <stdio.h>
void greeting(int n){
for(int i =1;i<=n;i++){
    printf("Good morning");
}
return;
}
int main(){

printf("Print n times good morning through recursion\n");
int n;
printf("Give the input: ");
scanf("%d",&n);

 greeting(n);

return 0;
}
