#include<stdio.h>
void main(){
    int num1,num2,ch;

    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

    printf("Menu:\n1) ADD\n2) SUB\n3) MUL\n4) DIV \nENTERE YOUR CHOICE: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("ADDition: %d",(num1+num2));
        break;
    case 2:
        printf("SUb %d",(num1-num2));
        break;
    case 3:
        printf("MUL: %d",(num1*num2));
        break;
    case 4:
        printf("DIV: %d",(num1/num2));
        break;
    
    default:
        break;
    }
   
}