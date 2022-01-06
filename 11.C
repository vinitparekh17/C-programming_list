/*area and perimeter of tringle*/

#include<stdio.h>
#include<conio.h>
void main(){
int side1,side2,side3,base,height;
clrscr();
printf("enter value of side1,side2 and side3:\n");
scanf("%d %d %d",&side1,&side2,&side3);
printf("enter value of base & heigth :\n");
scanf("%d %d",&base,&height);
printf("area of tringle is %d and perimeter is %d",(base*height)/2,side1
+side2+side3);
getch();

}

