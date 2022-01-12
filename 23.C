// Program to write ascii table for uppercase and lowercase latters.

#include <stdio.h>
#include <conio.h>
int main()
{
    char i;
    clrscr();
    for (i = 'a'; i <= 'z'; i++)
    {
        printf("%c : %d\n", i, i);
    }
    printf("\n \n \n");
    for (i = 'A'; i <= 'Z'; i++)
    {
        printf("%c : %d\n", i, i);
    }
    getch();
}
