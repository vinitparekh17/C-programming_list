// Program to check the number is odd or even 

#include<stdio.h>
#include<conio.h>
void main(){
int num;
clrscr();
printf("enter the number : \n");
scanf("%d",&num);
if(num%2==0){
printf("number is even \n");
}
else{
printf("number is odd \n");
}
getch();
}