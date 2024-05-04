#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	x=20;
	y=30;

	printf("\n Value of a and b before Function Call = %d %d",a,b);
	fncn(x,y);
	printf("\n Value of a and b after Function Call = %d %d",a,b);
	getch();
}
fncn(p,q)
int p,q;
{
	p = p+q;
	q = q+p;
}