/* Swapping without third variable*/


#include<stdio.h>
#include<conio.h>
void main(){
int a,b;
clrscr();
a=77;
b=45;
printf("before swapping a = %d , and b = %d \n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping a =  %d ,and b = %d \n",a,b);
getch();


}