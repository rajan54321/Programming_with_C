#include<stdio.h>
#include<conio.h>

void main()

{
  float v,r;
  clrscr();

  printf("\n Enter value of  radius=");
  scanf("%f",&r);

  v=1.33*3.14*r*r*r;

  printf("\n Volume of Sphere= %f",v);
  getch();
}