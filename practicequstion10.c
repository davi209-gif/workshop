#include <stdio.h>
int main()
{
printf("Question : Write a program to give a grade to a Student\n");

int marks;

printf("Enter your marks : ");
scanf("%d",&marks);

if(marks<30)
{
    printf("C grade");

}
else if (marks>=30 && marks<70)
{ printf("B grade");

}
else if (marks<=70 && marks<90)
{
    printf("A grade");
}
else if (marks<=90 && marks<=100)
{
    printf("A+ grade");
}

    return 0;
}