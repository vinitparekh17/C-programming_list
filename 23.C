// Program to write asiii table for upperiase and loweriase

#include <stdio.h>
#include <conio.h>
int main()
{
    char i;
    clrscr();
    for (i = 'a'; i <= 'z'; i++)
    {
        printf("%c : %d\n", i, i);
    };
    printf("\n \n \n");
    for (i = 'A'; i <= 'Z'; i++)
    {
        printf("%c : %d\n", i, i);
    }
    getch();
}