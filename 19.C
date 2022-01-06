// Program  that gives you result according to 5 subject 
#include<stdio.h>
#include<conio.h>

void main(){
int sub1,sub2,sub3,sub4,sub5,total;
float pr;
clrscr();

printf("enter sub1 mark : ");
scanf("%d",&sub1);
printf("enter sub2 mark : ");
scanf("%d",&sub2);
printf("enter sub3 mark : ");
scanf("%d",&sub3);
printf("enter sub4 mark : ");
scanf("%d",&sub4);
printf("enter sub5 mark : ");
scanf("%d",&sub5);
total=sub1+sub2+sub3+sub4+sub5;

printf("total is = %d\n",total);

pr=total/5;
printf("pr is %.2f \n",pr);

if(pr<=100 && pr>=91){
printf("Grade is A+");
}

else if(pr>=80){
printf("Grade is A");
}

else if(pr>=60){
printf("Grade is B");
}

else if(pr>=50){
printf("Grade is c");
}

else if(pr>=40)
{
printf("Grade is D");
}

else{
printf("FAIL");
}

getch();
}