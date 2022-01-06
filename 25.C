// Fibonaci series using while loop and do while loop

#include <stdio.h>
#include <conio.h>
void main()
{
    int n1 = 0, n2 = 1, n3, i, n;
    clrscr();
    printf("enter number of element :  ");
    scanf("%d", &n);
    // using for loop
    printf("\n using for loop \n");
    printf("%d,%d", n1, n2);
    for (i = 2; i < n; i++)
    {
        n3 = n2 + n1;
        printf(",%d", n3);
        n1 = n2;
        n2 = n3;
    }
    printf("\n using while loop \n");
    n1 = 0, n2 = 1, n3 = 0, i = 2;
    printf("%d,%d", n1, n2);
    while (i < n)
    {
        n3 = n1 + n2;
        printf(",%d", n3);
        n1 = n2;
        n2 = n3;
        i++;
    };
    // using do while loop
    printf("\n using do while loop \n");
    n1 = 0, n2 = 1, n3 = 0, i = 2;
    printf("%d,%d", n1, n2);
    do
    {
        n3 = n1 + n2;
        printf(",%d", n3);
        n1 = n2;
        n2 = n3;
        i++;
    } while (i < n);
    getch();
}