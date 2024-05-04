#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,c;
   clrscr();

   printf("\n enter value of a=");
   scanf("%d",&a);

   printf("\n enter value of b=");
   scanf("%d",&b);

   c=a/b;

   printf("\n Division is= %d",c);
   getch();
}