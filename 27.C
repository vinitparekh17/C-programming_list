// Program to reverse the entered number.

#include<stdio.h>
#include<conio.h>
void main(){
int n,res,rev=0;
clrscr();
printf("enter a number : ");
scanf("%d",&n);
while(n!=0){
res=n%10;
rev=(rev*10)+res;
n=n/10;
}
printf("Number in reverse order = %d ",rev);
getch();
}