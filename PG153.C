#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,a,b;
	x=20;
	y=20;
	printf("Value of x and y before Function Call = %d%d",x,y);
	fncn(&x,&y);
	printf("\n Values of x and y before FUnction Call = %d%d",x,y);
	getch();
}

fncn(p,q)
int *p,*q;
{
	*p = *p + *q;
	*q = *q + *p;
}


