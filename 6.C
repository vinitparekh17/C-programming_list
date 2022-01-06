/* print ascii value of ch */

#include<stdio.h>
#include<conio.h>

void main(){
char c;
int n;
clrscr();
printf("Enter a character: \n" );
scanf("%c",&c);
printf("ASCII value of %c is: %d",c,c);
getch();
}