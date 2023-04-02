#include<stdio.h>
#define PI 3.141
main()
{
    float r,A,D,C;
    printf("Enter the value of radius=");
    scanf("%f",&r);
    A=PI*r*r;
    D=2*r;
    C=2*PI*r;
    printf("Area Of a Circle=%f",A);
    printf("Diameter Of a Circle=%f",D);
    printf("Circumference Of a Circle=%f",C);
}