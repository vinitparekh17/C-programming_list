/* perform arithmatic opration */

#include <stdio.h>
#include <conio.h>
void main()
{
    int num1, num2, choice;
    clrscr();

    printf("enter num1: \n");
    scanf("%d", &num1);

    printf("enter num2: \n");
    scanf("%d", &num2);

    printf("Addition is %d", num1 + num2);
    printf("Substraction is %d", num1 - num2);
    printf("Multiplication is %d", num1 * num2);
    printf("Division is %d", num1 / num2);
    printf("Modulo is %d", num1 % num2);
    
getch();
}