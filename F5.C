#include<stdio.h>
#include<conio.h>

void main()

{
   float v,r,h;
   clrscr();

   printf("\n enter value of radius=");
   scanf("%f",&r);

   printf("\n enter value of height=");
   scanf("%f",&h);

   v=3.14*r*r*h;

   printf("\n Volume of Cylinder is = %f",v);
   getch();
}
