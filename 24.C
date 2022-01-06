// Program to find factorial of n number using for loop , while loop and do while loop.

#include <stdio.h>
#include <conio.h>
void main()
{
    int f, i, n;
    clrscr();
    printf("enter a number :");
    scanf("%d", &n);
    // using for loop
    printf("\nusing for loop \n");
    f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("factorial of %d is = %d \n \n", n, f);
    // using while loop
    printf("using while loop \n");
    i = 1;
    f = 1;
    while (i <= n)
    {
        f = f * i;
        i++;
    }
    printf("factorial of %d is = %d \n", n, f);
    // using do while loop
    printf("\nusing do while loop \n");
    i = 1;
    f = 1;
    do
    {
        f = f * i;
        i++;
    } while (i <= n);
    printf("factorial of %d = %d", n, f);

    getch();
}