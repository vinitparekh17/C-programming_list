// Program to find GCD and LCM

#include <stdio.h>
#include <stdio.h>
void main()
{
    int n1, n2, i, gcd, lcm;
    clrscr();
    printf("enter num1  : ");
    scanf("%d", &n1);
    printf("enter num2  : ");
    scanf("%d", &n2);
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        };
    };
    lcm = (n1 * n2) / gcd;
    printf("lcm of n1 and n2 is = %d and gcd = %d", lcm, gcd);
    getch();
}