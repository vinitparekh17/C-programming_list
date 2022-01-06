/*area and perameter of rectangle*/
#include<stdio.h>
#include<conio.h>
void main(){
int l,b;
clrscr();
printf("enter value of length and breadth : \n");
scanf("%d %d",&l,&b);
printf("perimeter of rectangle is = %d and area is =%d",2*(l+b),l*b);
getch();

}