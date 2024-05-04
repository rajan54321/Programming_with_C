#include<stdio.h>
#include<conio.h>

void main()

{
  float a,r;
  clrscr();

  printf("\n enter value of radius=");
  scanf("%f",&r);

  a=3.14*r*r;

  printf("\n Area of circle= %f",a);
  getch();
}