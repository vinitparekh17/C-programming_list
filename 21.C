// PRogram to make calculator using switch case

#include <stdio.h>
#include <conio.h>
void main()
{
    int num1, num2, choice;
    clrscr();
    printf("enter num1 : ");
    scanf("%d", &num1);
    printf("enter num2 : ");
    scanf("%d", &num2);
    printf("Addition ...... Press 1\nSubstraction ...... Press 2\nMultiplication ...... Press 3\nDivision ...... Press 4\nModulo ...... Press 5");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Addition is %d", num1 + num2);
    break;
    case 2:
        printf("Substraction is %d", num1 - num2);
        break;
    case 3:
        printf("Multiplication is %d", num1 * num2);
    break;
    case 4:
        printf("Division is %d", num1 / num2);
    break;
    case 5:
        printf("Modulo is %d", num1 % num2);
    break;
    default:
        printf("Invalid Choice ! ");
    break;
    }
    getch();
}
