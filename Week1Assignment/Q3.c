#include<stdio.h>
void main()
{
    int a,sum=0,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    do
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    } while (a!=0);
    printf("%d",sum);
}