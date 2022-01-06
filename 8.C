/* swap using thired variable */

#include<stdio.h>
#include<conio.h>

void main(){
int a,b,temp;
clrscr();
a =12;
b= 30;
printf("Before swapping a = %d and b = %d \n",a,b);
temp = a;
a=b;
b=temp;
printf("After swapping a = %d and b = %d",a,b);
getch();
}               																																																

