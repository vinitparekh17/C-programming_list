/* find quotient and remanider */

#include<stdio.h>
#include<conio.h>
void main(){
int num1,num2;
clrscr();
printf("Enter num 1 and num2 \n");
scanf("%d %d",&num1, &num2);
printf("Quotint is : %d \nReminder is : %d",
num1/num2,
num1%num2);
getch();

}