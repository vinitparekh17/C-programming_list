// Program to calculate area of circle, Square, Triangle, Rectangle, Semicircle.

#include <stdio.h>
#include <conio.h>
void main()
{
    int choice, r, l, b, h;
    clrscr();
    printf("-------------------------------------------------------------------\n");
    printf("Press .......... 1 Area of circle \n");
    printf("Press .......... 2 Area of squre \n");
    printf("Press .......... 3 Area of triangle \n");
    printf("Press .......... 4 Area of rectangle \n");
    printf("Press .......... 5 Area of semicircle \n");
    scanf("%d", &choice);
    printf("--------------------------------------------------------------------\n");
    switch (choice)
    {
    case 1:
    {
        printf("Enter radius of circle : ");
        scanf("%d", &r);
        printf("Area of circle = %f", 3.14 * r * r);
    }
    break;
    case 2:
    {
        printf("Enter a value of side : ");
        scanf("%d", &l);
        printf("Area of squre = %d", l * l);
    }
    break;
    case 3:
    {
        printf("Enter value of base: ");
        scanf("%d", &b);
        printf("Enter value of height : ");
        scanf("%d", &h);
        printf("Area of tringle = %d", (b * h) / 2);
    }
    break;
    case 4:
    {
        printf("Enter value of length : ");
        scanf("%d", &l);
        printf("Enter value of bradth : ");
        scanf("%d", &b);
        printf("Area of recatangle = %d", l * b);
    }
    break;
    case 5:
    {
        printf("Enter radius of semicircle : ");
        scanf("%d", &r);
        printf("Area of semicircle = %f", (3.14 * r * r) / 2);
    }
    break;
    default:
        printf("Wrong input ");
    }
    getch();
}
