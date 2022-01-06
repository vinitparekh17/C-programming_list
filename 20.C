// Find sum of all natural numbers using while loop, do while loop, for loop.

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, sum;
    clrscr();
    printf("enetr a number :\n");
    scanf("%d", &n);
    sum = 0;
    // using for loop
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum is = %d \n", sum);
    // using while
    i = 0;
    sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("sum is = %d \n", sum);
    // using do-while loop
    i = 0;
    sum = 0;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);
    printf("sum is = %d \n", sum);
    getch();
}