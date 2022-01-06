// Program to find number is Palindrom or not.

#include<stdio.h>
#include<conio.h>
void main(){
int n,res,rev=0,org;
clrscr();
printf("enter a number : ");
scanf("%d",&n);
org=n;
while(n!=0){
res=n%10;
rev=(rev*10)+res;
n=n/10;
}
printf("number in reverse order = %d \n",rev);
if(rev == org){
printf("number is palindrom \n");
}else{
printf("number is not palindrom \n");
}
getch();
}