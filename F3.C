#include<stdio.h>
#include<conio.h>

void main()

{
  float a,b,h;
  clrscr();

  printf("\n enter value of b=");
  scanf("%f",&b);

  printf("\n enter value of h=");
  scanf("%f",&h);

  a=0.5*b*h;

  printf("\n Area of Triangle is= %f",a);
  getch();
}