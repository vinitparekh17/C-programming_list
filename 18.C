// Program to find Gross salary

#include <stdio.h>
#include<conio.h>
void main(){
float basic_salary,hra,ma,ta,pf,groos_salary;
clrscr();
printf("enter your basic salary : \n");
scanf("%f",&basic_salary);
hra=0.10*basic_salary;
ma=0.05*basic_salary;
ta=0.02*basic_salary;
pf=0.10*basic_salary;
groos_salary=(basic_salary+hra+ma+ta)-(pf+200);
printf("----------------------------salary slip------------------------\n");
printf("Name:  Vinit Parekh \n");
printf("Designation : Full Stack Web Developer \n");

printf("*****************************Earnings****************************\n");
printf("basic salary is = %f \n",basic_salary);
printf("hra is @10%% is: %f  \n",hra);
printf("ma is @5%% is : %f  \n",ma);
printf("ta is @2%% is : %f  \n",ta);
printf("*************************Deducations****************************\n");
printf("Professional tax is 200rs. \n");
printf("pf is @10%% is : %f  \n",pf);
printf("------------------------------gross salary-----------------------\n");
printf("Your gross salary is : %f",groos_salary);

getch();

}
