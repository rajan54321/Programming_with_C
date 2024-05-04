#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
   float ci,i,d,p,r,n;
   clrscr();

   printf("\n Enter the value of p=");
   scanf("%f",&p);

   printf("\n Enter the value of r=");
   scanf("%f",&r);

   printf("\n Enter the value of n=");
   scanf("%f",&n);

   ci=p*pow((1.0 + r/100.00),n)-p;
   i=p*r*n/100.00;

   d=ci-i;

   printf("\n Compound Interest= %f",ci);

   printf("\n Simple Interst= %f",i);
   getch();
   printf("\n  Difference= %f",d);
   getch();
}




