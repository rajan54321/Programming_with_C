#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	clrscr();

	a=15;
	b=10;

	c=++a - ++b;
	printf("\n a=%d b=%d c=%d",a,b,c);

	d= b++ + --a;
	printf("\n a=%d b=%d d=%d",a,b,d);

	d= --b + ++a;
	printf("\n a=%d b=%d d=%d",a,b,d);
	getch();


}