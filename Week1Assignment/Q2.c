#include<stdio.h>
int main()
{
    int num=0;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num<0)
        printf("I entered a negative number");
    else if (num>0)
       printf("I entered a postive number");
    else
       printf("I entered 0");
    return 0;
}