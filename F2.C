#include<stdio.h>
#include<conio.h>

void main()

{
   float p,r,n,i;
   clrscr();

   printf("\n enter value of p=");
   scanf("%f",&p);

   printf("\n enter value of r=");
   scanf("%f",&r);

   printf("\n enter value of n=");
   scanf("%f",&n);

   i=p*r*n/100.0;

   printf("\n Simple Interest= %f",i);
   getch();
}
