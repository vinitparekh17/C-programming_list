/*perimeter and area of circle*/
#include<stdio.h>
#include<conio.h>

void main(){
float r ;
const int pi = 3.14;
clrscr();
printf("enter radius of circle: \n");
scanf("%f",&r);
printf("circumference of circle is = %f and area is = %f \n",2*pi*r,pi*r*r);

getch();


}